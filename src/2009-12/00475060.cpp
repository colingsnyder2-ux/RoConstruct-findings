// roc 2009-12 00475060  unit: DxUserInput  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00475060
//
// 00475060  d9ee                 fldz 
// 00475062  8b442410             mov eax, dword ptr [esp + 0x10]
// 00475066  8b542408             mov edx, dword ptr [esp + 8]
// 0047506a  51                   push ecx
// 0047506b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047506f  d91c24               fstp dword ptr [esp]
// 00475072  6a06                 push 6
// 00475074  50                   push eax
// 00475075  8b442410             mov eax, dword ptr [esp + 0x10]
// 00475079  51                   push ecx
// 0047507a  52                   push edx
// 0047507b  50                   push eax
// 0047507c  e88ffeffff           call 0x474f10
// 00475081  83c418               add esp, 0x18
// 00475084  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000003@@YAXHHHH@Z)

namespace ns_ROCX000003 {
// from server: 100% by atomic.potato
extern "C" void __cdecl sub_47aab0(int, int, int, int, int, float);

void f(int a, int b, int c, int d)
{
    sub_47aab0(a, b, c, d, 6, 0.0f);
}
}
