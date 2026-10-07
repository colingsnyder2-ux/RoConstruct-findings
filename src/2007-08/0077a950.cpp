// roc 2007-08 0077a950  unit: seg_00770000  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a950
//
// 0077a950  b9083d8c00           mov ecx, 0x8c3d08
// 0077a955  e966c3c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077a950 { void m(); };
extern T_func_0077a950 G1_func_0077a950;
void func_0077a950()
{
    G1_func_0077a950.m();
}
