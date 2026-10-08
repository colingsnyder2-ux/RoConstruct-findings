// from server: 65% by colin
// roc 2007-08 00493300  unit: RBX::VInstance::?$NonFactoryProduct  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493300
//
// 00493300  53                   push ebx
// 00493301  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00493305  55                   push ebp
// 00493306  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0049330a  56                   push esi
// 0049330b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0049330f  57                   push edi
// 00493310  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00493314  3bf5                 cmp esi, ebp
// 00493316  740c                 je 0x493324
// 00493318  8d4608               lea eax, [esi + 8]
// 0049331b  50                   push eax
// 0049331c  8bcf                 mov ecx, edi
// 0049331e  ffd3                 call ebx
// 00493320  8b36                 mov esi, dword ptr [esi]
// 00493322  ebf0                 jmp 0x493314
// 00493324  8b442414             mov eax, dword ptr [esp + 0x14]
// 00493328  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0049332c  8918                 mov dword ptr [eax], ebx
// 0049332e  897804               mov dword ptr [eax + 4], edi
// 00493331  5f                   pop edi
// 00493332  5e                   pop esi
// 00493333  5d                   pop ebp
// 00493334  894808               mov dword ptr [eax + 8], ecx
// 00493337  5b                   pop ebx
// 00493338  c3                   ret 

struct S {
    void m();
};

void f(S* self, void* a, void* b, void* c, void* d, void* e)
{
    void* p = *(void**)((char*)&a + 0x1c);
    void* q = *(void**)((char*)&a + 0x1c);
    void* r = *(void**)((char*)&a + 0x18);
    void* s = *(void**)((char*)&a + 0x2c);
    while (r != q) {
        void* t = (char*)r + 8;
        ((void (__thiscall*)(void*, void*))p)(s, t);
        r = *(void**)r;
    }
    void* u = *(void**)((char*)&a + 0x14);
    void* v = *(void**)((char*)&a + 0x30);
    *(void**)u = p;
    *(void**)((char*)u + 4) = s;
    *(void**)((char*)u + 8) = v;
}
