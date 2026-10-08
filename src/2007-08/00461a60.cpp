// from server: 51% by colin
// roc 2007-08 00461a60  unit: CScriptEditor  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00461a60
//
// 00461a60  837c240801           cmp dword ptr [esp + 8], 1
// 00461a65  56                   push esi
// 00461a66  752f                 jne 0x461a97
// 00461a68  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461a6b  8b7054               mov esi, dword ptr [eax + 0x54]
// 00461a6e  83c054               add eax, 0x54
// 00461a71  83ec08               sub esp, 8
// 00461a74  8bd4                 mov edx, esp
// 00461a76  8932                 mov dword ptr [edx], esi
// 00461a78  8b4004               mov eax, dword ptr [eax + 4]
// 00461a7b  85c0                 test eax, eax
// 00461a7d  89642414             mov dword ptr [esp + 0x14], esp
// 00461a81  894204               mov dword ptr [edx + 4], eax
// 00461a84  740c                 je 0x461a92
// 00461a86  83c004               add eax, 4
// 00461a89  ba01000000           mov edx, 1
// 00461a8e  f00fc110             lock xadd dword ptr [eax], edx
// 00461a92  e839fcffff           call 0x4616d0
// 00461a97  5e                   pop esi
// 00461a98  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CScriptEditor {
    char pad[0x54];
    void* field54;
    void func(int, void*, void*);
};

void CScriptEditor::func(int a, void* b, void* c) {
    if (a == 1) {
        void** p = (void**)((char*)field54 + 0x54);
        void* v = p[0];
        void* r = p[1];
        void* local[2];
        local[0] = v;
        local[1] = r;
        if (r != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)r + 4), 1);
        }
        ((void (__thiscall*)(CScriptEditor*, void*))0x4616d0)(this, local);
    }
}
