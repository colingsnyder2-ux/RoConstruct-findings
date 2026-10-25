// from server: 59% by atomic.potato
// roc 2011-06 00642990  unit: RBX::Workspace  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00642990
//
// 00642990  6aff                 push -1
// 00642992  6848bc9e00           push 0x9ebc48
// 00642997  64a100000000         mov eax, dword ptr fs:[0]
// 0064299d  50                   push eax
// 0064299e  64892500000000       mov dword ptr fs:[0], esp
// 006429a5  51                   push ecx
// 006429a6  837c241400           cmp dword ptr [esp + 0x14], 0
// 006429ab  56                   push esi
// 006429ac  8bf1                 mov esi, ecx
// 006429ae  89742404             mov dword ptr [esp + 4], esi
// 006429b2  7414                 je 0x6429c8
// 006429b4  c786940000001c81a900 mov dword ptr [esi + 0x94], 0xa9811c
// 006429be  c786b80000001481a900 mov dword ptr [esi + 0xb8], 0xa98114
// 006429c8  6a00                 push 0
// 006429ca  e871b3ffff           call 0x63dd40
// 006429cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006429d7  e884a8f8ff           call 0x5cd260
// 006429dc  894620               mov dword ptr [esi + 0x20], eax
// 006429df  ff05c8a4cc00         inc dword ptr [0xcca4c8]
// 006429e5  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 006429eb  c706a480a900         mov dword ptr [esi], 0xa980a4
// 006429f1  c746049880a900       mov dword ptr [esi + 4], 0xa98098
// 006429f8  c746188c80a900       mov dword ptr [esi + 0x18], 0xa9808c
// 006429ff  c7461c8080a900       mov dword ptr [esi + 0x1c], 0xa98080
// 00642a06  c786900000007880a900 mov dword ptr [esi + 0x90], 0xa98078
// 00642a10  c786a00000005080a900 mov dword ptr [esi + 0xa0], 0xa98050
// 00642a1a  c786b40000002880a900 mov dword ptr [esi + 0xb4], 0xa98028
// 00642a24  c786180100001080a900 mov dword ptr [esi + 0x118], 0xa98010
// 00642a2e  8b4804               mov ecx, dword ptr [eax + 4]
// 00642a31  c78431940000000880a900 mov dword ptr [ecx + esi + 0x94], 0xa98008
// 00642a3c  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 00642a42  8b4204               mov eax, dword ptr [edx + 4]
// 00642a45  8d8854ffffff         lea ecx, [eax - 0xac]
// 00642a4b  898c3090000000       mov dword ptr [eax + esi + 0x90], ecx
// 00642a52  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00642a56  8bc6                 mov eax, esi
// 00642a58  5e                   pop esi
// 00642a59  64890d00000000       mov dword ptr fs:[0], ecx
// 00642a60  83c410               add esp, 0x10
// 00642a63  c20400               ret 4

struct Workspace {
    char pad0[0x20];
    void* field20;
    char pad24[0x70];
    void* field94;
    char pad98[0x20];
    void* fieldb8;
    char padbc[0x5c];
    void* field118;
    Workspace(void*);
};

extern void* __stdcall cb_005cd260();
extern void cb_0063dd40(void*);

extern int g_cca4c8;

Workspace::Workspace(void* arg) {
    if (arg) {
        field94 = (void*)0xa9811c;
        fieldb8 = (void*)0xa98114;
    }
    cb_0063dd40(0);
    field20 = cb_005cd260();
    ++g_cca4c8;
    *(void**)this = (void*)0xa980a4;
    *(void**)((char*)this + 4) = (void*)0xa98098;
    *(void**)((char*)this + 0x18) = (void*)0xa9808c;
    *(void**)((char*)this + 0x1c) = (void*)0xa98080;
    *(void**)((char*)this + 0x90) = (void*)0xa98078;
    *(void**)((char*)this + 0xa0) = (void*)0xa98050;
    *(void**)((char*)this + 0xb4) = (void*)0xa98028;
    *(void**)((char*)this + 0x118) = (void*)0xa98010;
    void* p = field94;
    void* q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 0x94) = (void*)0xa98008;
    void* r = field94;
    void* s = *(void**)((char*)r + 4);
    *(void**)((char*)s + (int)this + 0x90) = (void*)((char*)s - 0xac);
}
