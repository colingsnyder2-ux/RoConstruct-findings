// from server: 90% by colin
// roc 2007-08 0047a020  unit: G3D::TextureManager::TextureArgs  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047a020
//
// 0047a020  53                   push ebx
// 0047a021  56                   push esi
// 0047a022  57                   push edi
// 0047a023  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0047a027  8b07                 mov eax, dword ptr [edi]
// 0047a029  8b10                 mov edx, dword ptr [eax]
// 0047a02b  8bf1                 mov esi, ecx
// 0047a02d  8bcf                 mov ecx, edi
// 0047a02f  ffd2                 call edx
// 0047a031  33d2                 xor edx, edx
// 0047a033  8bd8                 mov ebx, eax
// 0047a035  f7760c               div dword ptr [esi + 0xc]
// 0047a038  8b4608               mov eax, dword ptr [esi + 8]
// 0047a03b  8b3490               mov esi, dword ptr [eax + edx*4]
// 0047a03e  85f6                 test esi, esi
// 0047a040  7418                 je 0x47a05a
// 0047a042  391e                 cmp dword ptr [esi], ebx
// 0047a044  750d                 jne 0x47a053
// 0047a046  57                   push edi
// 0047a047  8d4e08               lea ecx, [esi + 8]
// 0047a04a  e811fdffff           call 0x479d60
// 0047a04f  84c0                 test al, al
// 0047a051  750f                 jne 0x47a062
// 0047a053  8b7648               mov esi, dword ptr [esi + 0x48]
// 0047a056  85f6                 test esi, esi
// 0047a058  75e8                 jne 0x47a042
// 0047a05a  5f                   pop edi
// 0047a05b  5e                   pop esi
// 0047a05c  32c0                 xor al, al
// 0047a05e  5b                   pop ebx
// 0047a05f  c20800               ret 8
// 0047a062  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0047a065  51                   push ecx
// 0047a066  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047a06a  e801afffff           call 0x474f70
// 0047a06f  5f                   pop edi
// 0047a070  5e                   pop esi
// 0047a071  b001                 mov al, 1
// 0047a073  5b                   pop ebx
// 0047a074  c20800               ret 8

struct ContentId {
    int dummy;
};

struct TextureArgs {
    int field0;
    int field4;
    int field8;
    int fieldC;
};

struct TextureData {
    int id;
    int pad[15];
    int field40;
    int pad2;
    TextureData* next;
};

struct TextureManager {
    int field0;
    int field4;
    int field8;
    int fieldC;

    bool findTexture(ContentId* id, TextureArgs* args);
};

struct ContentIdVtbl {
    int (__fastcall *getHash)(ContentId*);
};

extern "C" int __stdcall sub_474f70(int);
extern "C" bool __fastcall sub_479d60(int, ContentId*);

bool TextureManager::findTexture(ContentId* id, TextureArgs* args)
{
    int hash = ((ContentIdVtbl*)*(int*)id)->getHash(id);
    unsigned int idx = (unsigned int)hash % (unsigned int)this->fieldC;
    TextureData* node = *(TextureData**)(this->field8 + idx * 4);
    while (node) {
        if (node->id == hash) {
            if (sub_479d60((int)((char*)node + 8), id)) {
                sub_474f70(node->field40);
                return true;
            }
        }
        node = node->next;
    }
    return false;
}
