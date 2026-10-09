// from server: 81% by colin
// roc 2007-08 004ab9a0  unit: RBX::Network::Peer  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ab9a0
//
// 004ab9a0  83ec08               sub esp, 8
// 004ab9a3  53                   push ebx
// 004ab9a4  8bd9                 mov ebx, ecx
// 004ab9a6  83bbd41d000000       cmp dword ptr [ebx + 0x1dd4], 0
// 004ab9ad  7643                 jbe 0x4ab9f2
// 004ab9af  55                   push ebp
// 004ab9b0  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 004ab9b6  56                   push esi
// 004ab9b7  57                   push edi
// 004ab9b8  8db3cc1d0000         lea esi, [ebx + 0x1dcc]
// 004ab9be  8bff                 mov edi, edi
// 004ab9c0  8b4604               mov eax, dword ptr [esi + 4]
// 004ab9c3  8b38                 mov edi, dword ptr [eax]
// 004ab9c5  3bf8                 cmp edi, eax
// 004ab9c7  7502                 jne 0x4ab9cb
// 004ab9c9  ffd5                 call ebp
// 004ab9cb  8d4f14               lea ecx, [edi + 0x14]
// 004ab9ce  e87dc92700           call 0x728350
// 004ab9d3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ab9d6  8b01                 mov eax, dword ptr [ecx]
// 004ab9d8  50                   push eax
// 004ab9d9  56                   push esi
// 004ab9da  8d542418             lea edx, [esp + 0x18]
// 004ab9de  52                   push edx
// 004ab9df  8bce                 mov ecx, esi
// 004ab9e1  e89af0ffff           call 0x4aaa80
// 004ab9e6  83bbd41d000000       cmp dword ptr [ebx + 0x1dd4], 0
// 004ab9ed  77d1                 ja 0x4ab9c0
// 004ab9ef  5f                   pop edi
// 004ab9f0  5e                   pop esi
// 004ab9f1  5d                   pop ebp
// 004ab9f2  5b                   pop ebx
// 004ab9f3  83c408               add esp, 8
// 004ab9f6  c3                   ret 

struct Peer {
    void clear();
};

extern "C" void __stdcall invalid_parameter_noinfo();
extern "C" void __fastcall sub_728350(void* p);
extern "C" void __fastcall sub_4aaa80(void* self, void* a, void* b, void* c);

void Peer::clear()
{
    if (*(unsigned int*)((char*)this + 0x1dd4) > 0) {
        void* ebp = *(void**)0x77e6d8;
        char* esi = (char*)this + 0x1dcc;
        do {
            void* eax = *(void**)(esi + 4);
            void* edi = *(void**)eax;
            if (edi == eax) {
                ((void (__stdcall*)())ebp)();
            }
            sub_728350((char*)edi + 0x14);
            void* ecx = *(void**)(esi + 4);
            void* eax2 = *(void**)ecx;
            char* tmp;
            sub_4aaa80(esi, &tmp, eax2, esi);
        } while (*(unsigned int*)((char*)this + 0x1dd4) > 0);
    }
}
