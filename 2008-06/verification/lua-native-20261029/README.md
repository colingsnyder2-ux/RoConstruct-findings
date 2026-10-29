# Lua native integration, 2026-10-29

Lua 5.1.4 retains its complete native source/header cohort. The module now enables force_verified, includes its generated force header in the test, and proves its compatible verified luaO_pushfstring root. The incompatible Roblox lua_newstate remains excluded: its genuine rbx_luai_userstateopen hook is absent. No fake hook, VM-layout substitution, or source version mixing was introduced.

A 29-file fast-floating trial compiled completely. Only lmathlib changed its matches; whole-file fast math lost 42 prior symbol/address pairs and was rejected. Compiler-only float_control pragmas now scope precise-off to unchanged math_deg and math_random bodies. All 81 previous strict math code/data pairs remain; two new symbol/address pairs are exact. Actual selected map owners prove math_deg at 00625f70 and math_random at 00626150. Raw unique masked inventory rises only 430 to 431 because the degree address already had a candidate; do not equate masked inventory with native referenced-data proof or add two raw addresses.

The normal archive consumer links and passes. Full closure also links all 30 selected objects, has zero unresolved symbols, and passes the same runtime checks. Linked-root-proof.json records the stronger full-object closure map (object names therefore lack the archive prefix). No server credit is claimed.

Runtime exercises degree/radian conversion, trigonometry, square root/log, 128 seeded sequences across all three RNG forms and reproducibility, RNG argument errors, single-value intervals, invalid numeric conversion, bytecode dump/reload, coroutine yield/resume, GC allocation pressure, string patterns, and real temporary-file write/seek/read/close. The harness allocates its scratch filename in the Windows temporary directory; CRT tmpfile attempted an inaccessible location and was rejected as a harness dependency.

Reproduce with roc rebuild 2008-06 module lua and roc rebuild 2008-06 closure lua. Audit scripts run from the repository root with their campaign evidence paths restored. This proves the standalone Lua native module; it does not prove application Lua ABI interchangeability or a complete game renderer.
