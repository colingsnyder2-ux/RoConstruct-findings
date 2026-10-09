// from server: 43% by colin
// roc 2007-08 004b9400  unit: RakPeer  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9400
//
// 004b9400  56                   push esi
// 004b9401  8bf1                 mov esi, ecx
// 004b9403  8b4604               mov eax, dword ptr [esi + 4]
// 004b9406  8b8024010000         mov eax, dword ptr [eax + 0x124]
// 004b940c  3b4604               cmp eax, dword ptr [esi + 4]
// 004b940f  894608               mov dword ptr [esi + 8], eax
// 004b9412  742c                 je 0x4b9440
// 004b9414  57                   push edi
// 004b9415  eb09                 jmp 0x4b9420
// 004b9417  8da42400000000       lea esp, [esp]
// 004b941e  8bff                 mov edi, edi
// 004b9420  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b9423  8bb924010000         mov edi, dword ptr [ecx + 0x124]
// 004b9429  8b5608               mov edx, dword ptr [esi + 8]
// 004b942c  52                   push edx
// 004b942d  e830681700           call 0x62fc62
// 004b9432  8bc7                 mov eax, edi
// 004b9434  83c404               add esp, 4
// 004b9437  897e08               mov dword ptr [esi + 8], edi
// 004b943a  3b4604               cmp eax, dword ptr [esi + 4]
// 004b943d  75e1                 jne 0x4b9420
// 004b943f  5f                   pop edi
// 004b9440  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b9443  51                   push ecx
// 004b9444  e819681700           call 0x62fc62
// 004b9449  83c404               add esp, 4
// 004b944c  5e                   pop esi
// 004b944d  c3                   ret 

struct RakPeer
{
    char pad0[4];
    void* field_4;
    void* field_8;
    void f();
};

extern "C" void __cdecl sub_0062fc62(void*);

void RakPeer::f()
{
    void* p = *(void**)((char*)field_4 + 0x124);
    field_8 = p;
    if (p != field_4)
    {
        void* q;
        do
        {
            q = *(void**)((char*)field_8 + 0x124);
            sub_0062fc62(field_8);
            field_8 = q;
        } while (q != field_4);
    }
    sub_0062fc62(field_8);
}
