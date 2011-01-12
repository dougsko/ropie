#include <ruby.h>
#include <opie.h>

static VALUE cRopie;

static VALUE
ropie_new(VALUE self)
{
    return 0;
}

static VALUE
foo(VALUE self)
{
        return Qtrue;
}

void
Init_ropie()
{
    cRopie = rb_define_class("Ropie", rb_cObject);
    rb_define_method(cRopie, "new", ropie_new, 0);
    rb_define_method(cRopie, "foo", foo, 0);
}

