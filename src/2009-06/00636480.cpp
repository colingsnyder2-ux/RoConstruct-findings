// roc 2009-06 00636480  unit: RBX::Lua::VFunctionRef::?$holder  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00636480
//
// 00636480  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00636484  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00636488  8b542404             mov edx, dword ptr [esp + 4]
// 0063648c  50                   push eax
// 0063648d  8b02                 mov eax, dword ptr [edx]
// 0063648f  51                   push ecx
// 00636490  ffd0                 call eax
// 00636492  83c408               add esp, 8
// 00636495  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000001@@YAXHHH@Z)

namespace ns_ROCX000001 {
struct S {
};

void __cdecl f(int a, int b, int c) {
    void (*fn)(int, int) = *(void (**)(int, int))a;
    fn(b, c);
}
}
