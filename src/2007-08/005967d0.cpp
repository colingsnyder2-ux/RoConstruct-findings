// from server: 88% by colin
// roc 2007-08 005967d0  unit: RBX::LaserTool  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005967d0
//
// 005967d0  56                   push esi
// 005967d1  e8eafeffff           call 0x5966c0
// 005967d6  8bf0                 mov esi, eax
// 005967d8  56                   push esi
// 005967d9  ff15fcd27700         call dword ptr [0x77d2fc]
// 005967df  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005967e2  8b442408             mov eax, dword ptr [esp + 8]
// 005967e6  8908                 mov dword ptr [eax], ecx
// 005967e8  56                   push esi
// 005967e9  894618               mov dword ptr [esi + 0x18], eax
// 005967ec  ff15f8d27700         call dword ptr [0x77d2f8]
// 005967f2  5e                   pop esi
// 005967f3  c3                   ret 

struct S_func_005967d0 {
    void* field_18;
    void method_005967d0(void** out);
};

extern "C" void* __stdcall sub_005966c0();
extern "C" void __stdcall EnterCriticalSection(void* cs);
extern "C" void __stdcall LeaveCriticalSection(void* cs);

void S_func_005967d0::method_005967d0(void** out)
{
    void* p = sub_005966c0();
    EnterCriticalSection(p);
    void* v = *(void**)((char*)p + 0x18);
    *out = v;
    *(void**)((char*)p + 0x18) = out;
    LeaveCriticalSection(p);
}
