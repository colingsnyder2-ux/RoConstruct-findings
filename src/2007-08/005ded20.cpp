// from server: 100% by colin
// roc 2007-08 005ded20  unit: RBX::VMotorFeature::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ded20
//
// 005ded20  55                   push ebp
// 005ded21  56                   push esi
// 005ded22  8be9                 mov ebp, ecx
// 005ded24  8b7500               mov esi, dword ptr [ebp]
// 005ded27  57                   push edi
// 005ded28  83c658               add esi, 0x58
// 005ded2b  33ff                 xor edi, edi
// 005ded2d  397e04               cmp dword ptr [esi + 4], edi
// 005ded30  7e29                 jle 0x5ded5b
// 005ded32  53                   push ebx
// 005ded33  8b06                 mov eax, dword ptr [esi]
// 005ded35  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 005ded38  8bcb                 mov ecx, ebx
// 005ded3a  e8f15afdff           call 0x5b4830
// 005ded3f  8bc8                 mov ecx, eax
// 005ded41  e88a42fdff           call 0x5b2fd0
// 005ded46  84c0                 test al, al
// 005ded48  7408                 je 0x5ded52
// 005ded4a  53                   push ebx
// 005ded4b  8bcd                 mov ecx, ebp
// 005ded4d  e8fefdffff           call 0x5deb50
// 005ded52  83c701               add edi, 1
// 005ded55  3b7e04               cmp edi, dword ptr [esi + 4]
// 005ded58  7cd9                 jl 0x5ded33
// 005ded5a  5b                   pop ebx
// 005ded5b  5f                   pop edi
// 005ded5c  5e                   pop esi
// 005ded5d  5d                   pop ebp
// 005ded5e  c3                   ret 

struct RBXName;

struct Creator {
    void* m_vtbl;
};

struct CreatorList {
    Creator** m_data;
    int m_size;
};

struct FactoryProduct {
    void* m_vtbl;
    void* m_base;
    char m_pad[0x50];
    CreatorList m_creators;

    void removeCreator(Creator* c);
    void processCreators();
};

extern RBXName* __fastcall getClassName(Creator* c);
extern bool __fastcall isConstructed(RBXName* n);

void FactoryProduct::processCreators()
{
    CreatorList* list = (CreatorList*)((char*)this->m_vtbl + 0x58);
    int i = 0;
    while (i < list->m_size)
    {
        Creator* c = list->m_data[i];
        RBXName* n = getClassName(c);
        if (isConstructed(n))
        {
            removeCreator(c);
        }
        i++;
    }
}
