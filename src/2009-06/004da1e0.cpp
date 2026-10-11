// from server: 83% by atomic.potato
// roc 2009-06 004da1e0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004da1e0
//
// 004da1e0  56                   push esi
// 004da1e1  8bf1                 mov esi, ecx
// 004da1e3  833e00               cmp dword ptr [esi], 0
// 004da1e6  57                   push edi
// 004da1e7  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 004da1ed  7502                 jne 0x4da1f1
// 004da1ef  ffd7                 call edi
// 004da1f1  8b4604               mov eax, dword ptr [esi + 4]
// 004da1f4  80b86101000000       cmp byte ptr [eax + 0x161], 0
// 004da1fb  7405                 je 0x4da202
// 004da1fd  ffd7                 call edi
// 004da1ff  5f                   pop edi
// 004da200  5e                   pop esi
// 004da201  c3                   ret 
// 004da202  8b4808               mov ecx, dword ptr [eax + 8]
// 004da205  80b96101000000       cmp byte ptr [ecx + 0x161], 0
// 004da20c  7525                 jne 0x4da233
// 004da20e  8b01                 mov eax, dword ptr [ecx]
// 004da210  80b86101000000       cmp byte ptr [eax + 0x161], 0
// 004da217  7514                 jne 0x4da22d
// 004da219  8da42400000000       lea esp, [esp]
// 004da220  8bc8                 mov ecx, eax
// 004da222  8b01                 mov eax, dword ptr [ecx]
// 004da224  80b86101000000       cmp byte ptr [eax + 0x161], 0
// 004da22b  74f3                 je 0x4da220
// 004da22d  5f                   pop edi
// 004da22e  894e04               mov dword ptr [esi + 4], ecx
// 004da231  5e                   pop esi
// 004da232  c3                   ret 
// 004da233  8b4004               mov eax, dword ptr [eax + 4]
// 004da236  80b86101000000       cmp byte ptr [eax + 0x161], 0
// 004da23d  751a                 jne 0x4da259
// 004da23f  90                   nop 
// 004da240  8b4e04               mov ecx, dword ptr [esi + 4]
// 004da243  3b4808               cmp ecx, dword ptr [eax + 8]
// 004da246  7511                 jne 0x4da259
// 004da248  894604               mov dword ptr [esi + 4], eax
// 004da24b  8bd0                 mov edx, eax
// 004da24d  8b4204               mov eax, dword ptr [edx + 4]
// 004da250  80b86101000000       cmp byte ptr [eax + 0x161], 0
// 004da257  74e7                 je 0x4da240
// 004da259  5f                   pop edi
// 004da25a  894604               mov dword ptr [esi + 4], eax
// 004da25d  5e                   pop esi
// 004da25e  c3                   ret 

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    char pad0[0x161];
    char flag;
};

struct S {
    Node* field_0;
    Node* field_4;
    void f();
};

void S::f() {
    if (field_0 == 0) {
        _invalid_parameter_noinfo();
    }
    Node* e = field_4;
    if (e->flag != 0) {
        _invalid_parameter_noinfo();
        return;
    }
    Node* c = *(Node**)((char*)e + 8);
    if (c->flag == 0) {
        Node* a = *(Node**)c;
        if (a->flag == 0) {
            do {
                c = a;
                a = *(Node**)c;
            } while (a->flag == 0);
        }
        field_4 = c;
        return;
    }
    Node* a = *(Node**)((char*)e + 4);
    if (a->flag == 0) {
        do {
            Node* ec = field_4;
            if (ec != *(Node**)((char*)a + 8)) break;
            field_4 = a;
            Node* ed = a;
            a = *(Node**)((char*)ed + 4);
        } while (a->flag == 0);
    }
    field_4 = a;
}
