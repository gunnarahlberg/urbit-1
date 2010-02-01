/* mill/q/veck.c
**
** This file is in the public domain.
*/
#include "u4/all.h"

/* _mill_q_veck():
*/
u4_noun
_mill_q_veck(u4_milr m, 
             u4_gene dil)
{
  u4_lane lane = m->lane;

  return u4_k_trel(lane, u4_atom_gult, u4_noun_3, dil);
}
