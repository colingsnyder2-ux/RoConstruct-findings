// roc 2007-08 00777540  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777540
//
// 00777540  b9d0b18b00           mov ecx, 0x8bb1d0
// 00777545  e9c600caff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_00777540 { void m(); };
extern T_func_00777540 G1_func_00777540;
void func_00777540()
{
    G1_func_00777540.m();
}
