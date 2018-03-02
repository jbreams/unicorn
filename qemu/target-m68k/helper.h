DEF_HELPER_4(uc_tracecode, void, i32, i32, ptr, i64)

DEF_HELPER_1(bitrev, i32, i32)
DEF_HELPER_1(ff1, i32, i32)
DEF_HELPER_FLAGS_2(sats, TCG_CALL_NO_RWG_SE, i32, i32, i32)
DEF_HELPER_3(divuw, void, env, int, i32)
DEF_HELPER_3(divsw, void, env, int, s32)
DEF_HELPER_4(divul, void, env, int, int, i32)
DEF_HELPER_4(divsl, void, env, int, int, s32)
DEF_HELPER_4(divull, void, env, int, int, i32)
DEF_HELPER_4(divsll, void, env, int, int, s32)
DEF_HELPER_2(set_sr, void, env, i32)
DEF_HELPER_3(movec, void, env, i32, i32)
DEF_HELPER_4(cas2w, void, env, i32, i32, i32)
DEF_HELPER_4(cas2l, void, env, i32, i32, i32)

DEF_HELPER_2(f64_to_i32, f32, env, f64)
DEF_HELPER_2(f64_to_f32, f32, env, f64)
DEF_HELPER_2(i32_to_f64, f64, env, i32)
DEF_HELPER_2(f32_to_f64, f64, env, f32)
DEF_HELPER_2(iround_f64, f64, env, f64)
DEF_HELPER_2(itrunc_f64, f64, env, f64)
DEF_HELPER_2(sqrt_f64, f64, env, f64)
DEF_HELPER_1(abs_f64, f64, f64)
DEF_HELPER_1(chs_f64, f64, f64)
DEF_HELPER_3(add_f64, f64, env, f64, f64)
DEF_HELPER_3(sub_f64, f64, env, f64, f64)
DEF_HELPER_3(mul_f64, f64, env, f64, f64)
DEF_HELPER_3(div_f64, f64, env, f64, f64)
DEF_HELPER_3(sub_cmp_f64, f64, env, f64, f64)
DEF_HELPER_2(compare_f64, i32, env, f64)

DEF_HELPER_3(mac_move, void, env, i32, i32)
DEF_HELPER_3(macmulf, i64, env, i32, i32)
DEF_HELPER_3(macmuls, i64, env, i32, i32)
DEF_HELPER_3(macmulu, i64, env, i32, i32)
DEF_HELPER_2(macsats, void, env, i32)
DEF_HELPER_2(macsatu, void, env, i32)
DEF_HELPER_2(macsatf, void, env, i32)
DEF_HELPER_2(mac_set_flags, void, env, i32)
DEF_HELPER_2(set_macsr, void, env, i32)
DEF_HELPER_2(get_macf, i32, env, i64)
DEF_HELPER_1(get_macs, i32, i64)
DEF_HELPER_1(get_macu, i32, i64)
DEF_HELPER_2(get_mac_extf, i32, env, i32)
DEF_HELPER_2(get_mac_exti, i32, env, i32)
DEF_HELPER_3(set_mac_extf, void, env, i32, i32)
DEF_HELPER_3(set_mac_exts, void, env, i32, i32)
DEF_HELPER_3(set_mac_extu, void, env, i32, i32)

DEF_HELPER_2(flush_flags, void, env, i32)
DEF_HELPER_2(set_ccr, void, env, i32)
DEF_HELPER_FLAGS_1(get_ccr, TCG_CALL_NO_WG_SE, i32, env)
DEF_HELPER_2(raise_exception, void, env, i32)

DEF_HELPER_FLAGS_4(bfexts_mem, TCG_CALL_NO_WG, i32, env, i32, s32, i32)
DEF_HELPER_FLAGS_4(bfextu_mem, TCG_CALL_NO_WG, i64, env, i32, s32, i32)
DEF_HELPER_FLAGS_5(bfins_mem, TCG_CALL_NO_WG, i32, env, i32, i32, s32, i32)
DEF_HELPER_FLAGS_4(bfchg_mem, TCG_CALL_NO_WG, i32, env, i32, s32, i32)
DEF_HELPER_FLAGS_4(bfclr_mem, TCG_CALL_NO_WG, i32, env, i32, s32, i32)
DEF_HELPER_FLAGS_4(bfset_mem, TCG_CALL_NO_WG, i32, env, i32, s32, i32)

