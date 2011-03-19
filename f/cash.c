/* l/cash.c
** 
** This file is in the public domain.
*/
#include "all.h"

  /** Forward declarations.
  **/
    static u2_flag
    _cs_save_in(u2_rail, u2_ray, c3_w, c3_w, c3_m, u2_noun, u2_noun);

    static u2_flag
    _cs_save_b(u2_rail, u2_ray, c3_w, c3_w, c3_m, u2_noun, u2_noun);


/* _cs_find_1()::
*/
static u2_weak                                                    //  retain
_cs_find_1(u2_ray  lot_r,
           c3_w    key_w,
           c3_w    sif_w,
           c3_m    fun_m,
           u2_noun sam)                                           //  retain
{
  top: {
    if ( u2_slot_is_a(lot_r) ) {
      if ( (fun_m == u2_slot_a_fun(lot_r)) &&
           (u2_yes == u2_sing(sam, u2_slot_a_sam(lot_r)) ) )
      {
        return u2_slot_a_pro(lot_r);
      } else {
        return u2_none;
      }
    }
    else if ( u2_slot_is_c(lot_r) ) {
      return u2_none;
    }
    else {
      c3_w gun_w = u2_slot_b_gun(lot_r);
      c3_w i_w = (key_w >> sif_w) & 15;

      if ( u2_slot_gunk_is_coll(gun_w) ) {
        c3_w j_w = i_w;

        do {
          u2_ray tol_r = u2_slot_b_sid_i(lot_r, j_w);

          if ( u2_slot_is_a(tol_r) &&
              (fun_m == u2_slot_a_fun(tol_r)) &&
              (u2_yes == u2_sing(sam, u2_slot_a_sam(tol_r)) ) )
          {
            return u2_slot_a_pro(tol_r);
          }
          else return u2_none;

          j_w = ((j_w + 1) & 15);
        }
        while ( j_w != i_w );

        return u2_none;
      } 
      else {
        lot_r = u2_slot_b_sid_i(lot_r, i_w);
        sif_w += 4;
        goto top;
      }
    }
  }
}

/* _cs_find_2()::
*/
static u2_weak                                                    //  retain
_cs_find_2(u2_ray  lot_r,
           c3_w    key_w,
           c3_w    sif_w,
           c3_m    fun_m,
           u2_noun a,                                             //  retain
           u2_noun b)                                             //  retain
{
  top: {
    if ( u2_slot_is_a(lot_r) ) {
      if ( (fun_m == u2_slot_a_fun(lot_r)) &&
           (u2_yes == u2_sing_cell(a, b, u2_slot_a_sam(lot_r)) ) )
      {
        return u2_slot_a_pro(lot_r);
      } else {
        return u2_none;
      }
    }
    else if ( u2_slot_is_c(lot_r) ) {
      return u2_none;
    }
    else {
      c3_w gun_w = u2_slot_b_gun(lot_r);
      c3_w i_w = (key_w >> sif_w) & 15;

      if ( u2_slot_gunk_is_coll(gun_w) ) {
        c3_w j_w = i_w;

        do {
          u2_ray tol_r = u2_slot_b_sid_i(lot_r, j_w);

          if ( u2_slot_is_a(tol_r) &&
              (fun_m == u2_slot_a_fun(tol_r)) &&
              (u2_yes == u2_sing_cell(a, b, u2_slot_a_sam(tol_r)) ) )
          {
            return u2_slot_a_pro(tol_r);
          }
          else return u2_none;
          
          j_w = ((j_w + 1) & 15);
        }
        while ( j_w != i_w );

        return u2_none;
      } 
      else {
        lot_r = u2_slot_b_sid_i(lot_r, i_w);
        sif_w += 4;
        goto top;
      }
    }
  }
}

/* _cs_find_3()::
*/
static u2_weak                                                    //  retain
_cs_find_3(u2_ray  lot_r,
           c3_w    key_w,
           c3_w    sif_w,
           c3_m    fun_m,
           u2_noun a,                                             //  retain
           u2_noun b,                                             //  retain
           u2_noun c)                                             //  retain
{
  top: {
    if ( u2_slot_is_a(lot_r) ) {
      if ( (fun_m == u2_slot_a_fun(lot_r)) &&
           (u2_yes == u2_sing_trel(a, b, c, u2_slot_a_sam(lot_r)) ) )
      {
        return u2_slot_a_pro(lot_r);
      } else {
        return u2_none;
      }
    }
    else if ( u2_slot_is_c(lot_r) ) {
      return u2_none;
    }
    else {
      c3_w gun_w = u2_slot_b_gun(lot_r);
      c3_w i_w = (key_w >> sif_w) & 15;

      if ( u2_slot_gunk_is_coll(gun_w) ) {
        c3_w j_w = i_w;

        do {
          u2_ray tol_r = u2_slot_b_sid_i(lot_r, j_w);

          if ( u2_slot_is_a(tol_r) &&
              (fun_m == u2_slot_a_fun(tol_r)) &&
              (u2_yes == u2_sing_trel(a, b, c, u2_slot_a_sam(tol_r)) ) )
          {
            return u2_slot_a_pro(tol_r);
          }
          else return u2_none;
          
          j_w = ((j_w + 1) & 15);
        }
        while ( j_w != i_w );

        return u2_none;
      } 
      else {
        lot_r = u2_slot_b_sid_i(lot_r, i_w);
        sif_w += 4;
        goto top;
      }
    }
  }
}

/* _cs_find_4()::
*/
static u2_weak                                                    //  retain
_cs_find_4(u2_ray  lot_r,
           c3_w    key_w,
           c3_w    sif_w,
           c3_m    fun_m,
           u2_noun a,                                             //  retain
           u2_noun b,                                             //  retain
           u2_noun c,                                             //  retain
           u2_noun d)                                             //  retain
{
  top: {
    if ( u2_slot_is_a(lot_r) ) {
      if ( (fun_m == u2_slot_a_fun(lot_r)) &&
           (u2_yes == u2_sing_qual(a, b, c, d, u2_slot_a_sam(lot_r)) ) )
      {
        return u2_slot_a_pro(lot_r);
      } else {
        return u2_none;
      }
    }
    else if ( u2_slot_is_c(lot_r) ) {
      return u2_none;
    }
    else {
      c3_w gun_w = u2_slot_b_gun(lot_r);
      c3_w i_w = (key_w >> sif_w) & 15;

      if ( u2_slot_gunk_is_coll(gun_w) ) {
        c3_w j_w = i_w;

        do {
          u2_ray tol_r = u2_slot_b_sid_i(lot_r, j_w);

          if ( u2_slot_is_a(tol_r) &&
              (fun_m == u2_slot_a_fun(tol_r)) &&
              (u2_yes == u2_sing_qual(a, b, c, d, u2_slot_a_sam(tol_r)) ) )
          {
            return u2_slot_a_pro(tol_r);
          }
          else return u2_none;
          
          j_w = ((j_w + 1) & 15);
        }
        while ( j_w != i_w );

        return u2_none;
      } 
      else {
        lot_r = u2_slot_b_sid_i(lot_r, i_w);
        sif_w += 4;
        goto top;
      }
    }
  }
}

/* u2_cs_find():
**
**   Find `sam` for `fun`, or return `u2_none`.
*/
u2_weak                                                           //  retain
u2_cs_find(u2_ray  lot_r,
           c3_m    fun_m,
           u2_noun sam)                                           //  retain
{
   c3_w key_w = u2_mug(fun_m) ^ u2_mug(sam);

   return _cs_find_1(lot_r, key_w, 0, fun_m, sam);
}

/* u2_cs_find_cell():
**
**   Find `[a b]` for `fun`, or return `u2_none`.
*/
u2_weak                                                           //  retain
u2_cs_find_cell(u2_ray  lot_r,
                c3_m    fun_m,
                u2_noun a,                                        //  retain
                u2_noun b)                                        //  retain
{
   c3_w key_w = u2_mug(fun_m) ^ u2_mug_cell(a, b);

   return _cs_find_2(lot_r, key_w, 0, fun_m, a, b);
}

/* u2_cs_find_trel():
**
**   Find `[a b]` for `fun`, or return `u2_none`.
*/
u2_weak                                                           //  retain
u2_cs_find_trel(u2_ray  lot_r,
                c3_m    fun_m,
                u2_noun a,                                        //  retain
                u2_noun b,                                        //  retain
                u2_noun c)                                        //  retain
{
   c3_w key_w = u2_mug(fun_m) ^ u2_mug_trel(a, b, c);

   return _cs_find_3(lot_r, key_w, 0, fun_m, a, b, c);
}

/* u2_cs_find_qual():
**
**   Find `[a b]` for `fun`, or return `u2_none`.
*/
u2_weak                                                           //  retain
u2_cs_find_qual(u2_ray  lot_r,
                c3_m    fun_m,
                u2_noun a,                                        //  retain
                u2_noun b,                                        //  retain
                u2_noun c,                                        //  retain
                u2_noun d)                                        //  retain
{
   c3_w key_w = u2_mug(fun_m) ^ u2_mug_qual(a, b, c, d);

   return _cs_find_4(lot_r, key_w, 0, fun_m, a, b, c, d);
}

/* _cs_save_c(): add to slot of type c.
*/
static u2_flag
_cs_save_c(u2_ray  lot_r,
           c3_m    fun_m,
           u2_noun sam,                                           //  transfer
           u2_noun pro)                                           //  transfer
{
  u2_slot_a_fun(lot_r) = fun_m;
  u2_slot_a_sam(lot_r) = sam;
  u2_slot_a_pro(lot_r) = pro;

  return u2_yes;
}

/* _cs_more_b(): convert slot of type b from collision to radix.
*/
static void
_cs_more_b(u2_rail ral_r,
           u2_ray  lot_r,
           c3_w    sif_w)
{
  u2_ray dis_r = u2_rl_ralloc(ral_r, (16 * c3_wiseof(u2_cash_slot_a)));
  u2_ray sid_r = u2_slot_b_sid(lot_r);
  c3_w   i_w;

  if ( 0 == dis_r ) {
    return;
  }
  u2_slot_b_gun(lot_r) = u2_slot_gunk_radx;
  u2_slot_b_rag(lot_r) = 0;
  u2_slot_b_sid(lot_r) = dis_r;

  for ( i_w = 0; i_w < 16; i_w++ ) {
    u2_ray tol_r = (dis_r + ((i_w) * c3_wiseof(u2_cash_slot_a)));

    u2_slot_c_emt(tol_r) = u2_slot_emty;
  }

  for ( i_w = 0; i_w < 16; i_w++ ) {
    u2_ray tol_r = (sid_r + ((i_w) * c3_wiseof(u2_cash_slot_a)));

    if ( u2_slot_is_a(tol_r) ) {
      c3_m    fun_m = u2_slot_a_fun(tol_r);
      u2_noun sam   = u2_slot_a_sam(tol_r);
      u2_noun pro   = u2_slot_a_pro(tol_r);
      c3_w    key_w = u2_mug(fun_m) ^ u2_mug(sam);

      if ( u2_no == _cs_save_b(ral_r, lot_r, key_w, sif_w, fun_m, sam, pro) ) {
        u2_rz(ral_r, sam);
        u2_rz(ral_r, pro);
      }
    }
  }
  u2_rl_rfree(ral_r, sid_r);
}

/* _cs_save_b(): add to slot of type b.  See `_cs_save_in()` for special.
*/
static u2_flag
_cs_save_b(u2_rail ral_r,
           u2_ray  lot_r,
           c3_w    key_w,
           c3_w    sif_w,
           c3_m    fun_m,
           u2_noun sam,                                           //  special
           u2_noun pro)                                           //  special
{
  top: {
    c3_w gun_w = u2_slot_b_gun(lot_r);
    c3_w i_w = (key_w >> sif_w) & 15;

    if ( u2_slot_gunk_is_coll(gun_w) ) {
      if ( (u2_slot_b_rag(lot_r) >= u2_tune_cash_hi) &&
           (sif_w != 32) ) 
      {
        _cs_more_b(ral_r, lot_r, sif_w);
        goto top;
      }
      else {
        c3_w j_w = i_w;

        do {
          u2_ray tol_r = u2_slot_b_sid_i(lot_r, j_w);

          if ( u2_slot_is_c(tol_r) ) {
            u2_slot_b_rag(lot_r) += 1;

            return _cs_save_c(tol_r, fun_m, sam, pro);
          }
          j_w = ((j_w + 1) & 15);
        }
        while ( j_w != i_w );

        return u2_no;
      }
    } else {
      u2_flag ave = _cs_save_in(ral_r, 
                                u2_slot_b_sid_i(lot_r, i_w), 
                                key_w, 
                                (sif_w + 4), 
                                fun_m, sam, pro);
      if ( u2_yes == ave ) {
        u2_slot_b_rag(lot_r) += 1;
      }
      return ave;
    }
  }
}

/* _cs_save_a(): add to slot of type a.  See `cs_save_in()` for special.
*/
static u2_flag
_cs_save_a(u2_rail ral_r,
           u2_ray  lot_r,
           c3_w    key_w,
           c3_w    sif_w,
           c3_m    fun_m,
           u2_noun sam,                                           //  special
           u2_noun pro)                                           //  special
{
  u2_noun sid_r = u2_rl_ralloc(ral_r, 16 * c3_wiseof(u2_cash_slot_a));

  if ( 0 == sid_r ) {
    return u2_no;
  } else {
    c3_m unf_m  = u2_slot_a_fun(lot_r);
    u2_noun mas = u2_slot_a_sam(lot_r);
    u2_noun rop = u2_slot_a_pro(lot_r);
    c3_w yek_w  = u2_mug(unf_m) ^ u2_mug(mas);
    u2_flag ave;

    u2_slot_b_gun(lot_r) = u2_slot_gunk_coll;
    u2_slot_b_rag(lot_r) = 0;
    u2_slot_b_sid(lot_r) = sid_r;

    {
      c3_w i_w;

      for ( i_w = 0; i_w < 16; i_w++ ) {
        u2_ray tol_r = u2_slot_b_sid_i(lot_r, i_w);

        u2_slot_c_emt(tol_r) = u2_slot_emty;
      }
    }

    ave = _cs_save_b(ral_r, lot_r, yek_w, sif_w, unf_m, mas, rop);
    c3_assert(u2_yes == ave);

    return _cs_save_b(ral_r, lot_r, key_w, sif_w, fun_m, sam, pro);
  }
}

/* _cs_save_in():
**
**   As u2_cs_save(), with special memory semantics: `sam` and `pro`
**   are transferred iff result is `u2_yes`, retained iff `u2_no`.
*/
static u2_flag
_cs_save_in(u2_rail ral_r,
            u2_ray  lot_r,
            c3_w    key_w,
            c3_w    sif_w,
            c3_m    fun_m,
            u2_noun sam,                                          //  special
            u2_noun pro)                                          //  special
{
  if ( u2_slot_is_a(lot_r) ) {
    return _cs_save_a(ral_r, lot_r, key_w, sif_w, fun_m, sam, pro);
  }
  else if ( u2_slot_is_b(lot_r) ) {
    return _cs_save_b(ral_r, lot_r, key_w, sif_w, fun_m, sam, pro);
  }
  else return _cs_save_c(lot_r, fun_m, sam, pro);
}

/* u2_cs_save():
**
**   Save `sam` as `pro` for `fun`.
*/
u2_noun                                                           //  transfer
u2_cs_save(u2_rail ral_r,
           u2_ray  lot_r,
           c3_m    fun_m,
           u2_noun sam,                                           //  retain
           u2_noun pro)                                           //  transfer
{
  u2_noun ams   = u2_rx(ral_r, sam);
  u2_noun orp   = u2_rx(ral_r, pro);
  c3_w    key_w = u2_mug(fun_m) ^ u2_mug(ams);
  c3_w    sif_w = 0;
  u2_flag ave;

  if ( (u2_none == ams) || (u2_none == orp) ) {
    u2_rz(ral_r, ams);
    u2_rz(ral_r, orp);
    return u2_none;
  }

  ave = _cs_save_in(ral_r, lot_r, key_w, sif_w, fun_m, ams, orp);

  if ( ave == u2_no ) {
    u2_rz(ral_r, ams);
    u2_rz(ral_r, orp);

    /* All references to `orp` discarded; `pro` is preserved.
    */
    return pro;
  }
  else {
    u2_rz(ral_r, pro);

    /* We have kept one reference to `orp` in the table;
    ** we return another to the caller.
    */
    return u2_rx(ral_r, orp);
  }
}

/* u2_cs_save_cell():
**
**   Save `[a b]` as `pro` for `fun`.
*/
u2_noun                                                           //  transfer
u2_cs_save_cell(u2_rail ral_r,
                u2_ray  lot_r,
                c3_m    fun_m,
                u2_noun a,                                        //  retain
                u2_noun b,                                        //  retain
                u2_noun pro)                                      //  transfer
{
  u2_noun ams   = u2_rc(ral_r, u2_rx(ral_r, a), u2_rx(ral_r, b));
  u2_noun orp   = u2_rx(ral_r, pro);
  c3_w    key_w = u2_mug(fun_m) ^ u2_mug(ams);
  c3_w    sif_w = 0;
  u2_flag ave;

  if ( (u2_none == ams) || (u2_none == orp) ) {
    u2_rz(ral_r, ams);
    u2_rz(ral_r, orp);
    return u2_none;
  }

  ave = _cs_save_in(ral_r, lot_r, key_w, sif_w, fun_m, ams, orp);

  if ( ave == u2_no ) {
    u2_rz(ral_r, ams);
    u2_rz(ral_r, orp);

    /* All references to `orp` discarded; `pro` is preserved.
    */
    return pro;
  }
  else {
    u2_rz(ral_r, pro);

    /* We have kept one reference to `orp` in the table;
    ** we return another to the caller.
    */
    return u2_rx(ral_r, orp);
  }
}

/* u2_cs_save_trel():
**
**   Save `[a b c]` as `pro` for `fun`.
*/
u2_noun                                                           //  transfer
u2_cs_save_trel(u2_rail ral_r,
                u2_ray  lot_r,
                c3_m    fun_m,
                u2_noun a,                                        //  retain
                u2_noun b,                                        //  retain
                u2_noun c,                                        //  retain
                u2_noun pro)                                      //  transfer
{
  u2_noun ams   = u2_rt(ral_r, u2_rx(ral_r, a), 
                               u2_rx(ral_r, b),
                               u2_rx(ral_r, c));
  u2_noun orp   = u2_rx(ral_r, pro);
  c3_w    key_w = u2_mug(fun_m) ^ u2_mug(ams);
  c3_w    sif_w = 0;
  u2_flag ave;

  if ( (u2_none == ams) || (u2_none == orp) ) {
    u2_rz(ral_r, ams);
    u2_rz(ral_r, orp);
    return u2_none;
  }

  ave = _cs_save_in(ral_r, lot_r, key_w, sif_w, fun_m, ams, orp);

  if ( ave == u2_no ) {
    u2_rz(ral_r, ams);
    u2_rz(ral_r, orp);

    /* All references to `orp` discarded; `pro` is preserved.
    */
    return pro;
  }
  else {
    u2_rz(ral_r, pro);

    /* We have kept one reference to `orp` in the table;
    ** we return another to the caller.
    */
    return u2_rx(ral_r, orp);
  }
}

/* u2_cs_save_qual():
**
**   Save `[a b c d]` as `pro` for `fun`.
*/
u2_noun                                                           //  transfer
u2_cs_save_qual(u2_rail ral_r,
                u2_ray  lot_r,
                c3_m    fun_m,
                u2_noun a,                                        //  retain
                u2_noun b,                                        //  retain
                u2_noun c,                                        //  retain
                u2_noun d,                                        //  retain
                u2_noun pro)                                      //  transfer
{
  u2_noun ams   = u2_rq(ral_r, u2_rx(ral_r, a), 
                               u2_rx(ral_r, b),
                               u2_rx(ral_r, c),
                               u2_rx(ral_r, d));
  u2_noun orp   = u2_rx(ral_r, pro);
  c3_w    key_w = u2_mug(fun_m) ^ u2_mug(ams);
  c3_w    sif_w = 0;
  u2_flag ave;

  if ( (u2_none == ams) || (u2_none == orp) ) {
    u2_rz(ral_r, ams);
    u2_rz(ral_r, orp);
    return u2_none;
  }

  ave = _cs_save_in(ral_r, lot_r, key_w, sif_w, fun_m, ams, orp);

  if ( ave == u2_no ) {
    u2_rz(ral_r, ams);
    u2_rz(ral_r, orp);

    /* All references to `orp` discarded; `pro` is preserved.
    */
    return pro;
  }
  else {
    u2_rz(ral_r, pro);

    /* We have kept one reference to `orp` in the table;
    ** we return another to the caller.
    */
    return u2_rx(ral_r, orp);
  }
}

/* u2_cs_init():
**
**  Initialize slot to empty.
*/
void
u2_cs_init(u2_ray lot_r)
{
  u2_slot_c_emt(lot_r) = u2_slot_emty;
}
