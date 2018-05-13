/*
// ngx_http_mruby_var.h - ngx_mruby mruby module header
//
// See Copyright Notice in ngx_http_mruby_var.c
*/

#ifndef NGX_HTTP_MRUBY_VAR_H
#define NGX_HTTP_MRUBY_VAR_H

#include "ngx_http_mruby_module.h"
#include "ngx_http_mruby_request.h"
#include <mruby.h>
#include <mruby/hash.h>
#include <mruby/variable.h>
#include <ngx_http.h>

mrb_value ngx_mrb_var_set_vector(mrb_state *mrb, mrb_value self, char *k, int len, mrb_value o, ngx_http_request_t *r);
#endif // NGX_HTTP_MRUBY_VAR_H
