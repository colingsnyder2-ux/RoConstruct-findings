// from server: 48% by colin
// roc 2007-08 004a1790  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a1790
//
// 004a1790  83ec0c               sub esp, 0xc
// 004a1793  56                   push esi
// 004a1794  6a00                 push 0
// 004a1796  68587d8800           push 0x887d58
// 004a179b  8bf1                 mov esi, ecx
// 004a179d  8b06                 mov eax, dword ptr [esi]
// 004a179f  6874718800           push 0x887174
// 004a17a4  6a00                 push 0
// 004a17a6  50                   push eax
// 004a17a7  e88af51800           call 0x630d36
// 004a17ac  83c414               add esp, 0x14
// 004a17af  85c0                 test eax, eax
// 004a17b1  751e                 jne 0x4a17d1
// 004a17b3  68046e7800           push 0x786e04
// 004a17b8  8d4c2408             lea ecx, [esp + 8]
// 004a17bc  ff1510e77700         call dword ptr [0x77e710]
// 004a17c2  680c1e8400           push 0x841e0c
// 004a17c7  8d442408             lea eax, [esp + 8]
// 004a17cb  50                   push eax
// 004a17cc  e8cdf31800           call 0x630b9e
// 004a17d1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a17d5  8b4018               mov eax, dword ptr [eax + 0x18]
// 004a17d8  8b10                 mov edx, dword ptr [eax]
// 004a17da  8b5208               mov edx, dword ptr [edx + 8]
// 004a17dd  51                   push ecx
// 004a17de  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a17e1  51                   push ecx
// 004a17e2  8bc8                 mov ecx, eax
// 004a17e4  ffd2                 call edx
// 004a17e6  5e                   pop esi
// 004a17e7  83c40c               add esp, 0xc
// 004a17ea  c20400               ret 4

struct FuncDesc {
    char pad[0x18];
    void* m_vt;
};

struct S {
    void* m_vt;
    void* m_owner;
    void f(void* arg);
};

extern "C" void* __stdcall sub_630d36(void* a, void* b, void* c, void* d, void* e);
extern "C" void __stdcall sub_630b9e(void* a, void* b);
extern "C" void* __stdcall sub_77e710(void* a);

void S::f(void* arg)
{
    void* r = sub_630d36(m_vt, 0, (void*)0x887174, (void*)0x887d58, 0);
    if (r == 0) {
        void* tmp;
        sub_77e710(&tmp);
        sub_630b9e((void*)0x841e0c, &tmp);
    }
    FuncDesc* fd = (FuncDesc*)r;
    void* obj = fd->m_vt;
    void* vt = *(void**)obj;
    void (*fn)(void*, void*, void*) = *(void (**)(void*, void*, void*))((char*)vt + 8);
    fn(obj, m_owner, arg);
}
