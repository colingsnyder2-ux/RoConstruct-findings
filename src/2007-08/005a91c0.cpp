// from server: 70% by colin
// roc 2007-08 005a91c0  unit: RBX::VHumanoid::?$SignalDesc  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a91c0
//
// 005a91c0  56                   push esi
// 005a91c1  8bf1                 mov esi, ecx
// 005a91c3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a91c7  57                   push edi
// 005a91c8  e863b60000           call 0x5b4830
// 005a91cd  8bf8                 mov edi, eax
// 005a91cf  85ff                 test edi, edi
// 005a91d1  742a                 je 0x5a91fd
// 005a91d3  8b7634               mov esi, dword ptr [esi + 0x34]
// 005a91d6  8b06                 mov eax, dword ptr [esi]
// 005a91d8  8b5004               mov edx, dword ptr [eax + 4]
// 005a91db  8bce                 mov ecx, esi
// 005a91dd  ffd2                 call edx
// 005a91df  83f805               cmp eax, 5
// 005a91e2  7411                 je 0x5a91f5
// 005a91e4  8b7608               mov esi, dword ptr [esi + 8]
// 005a91e7  8b06                 mov eax, dword ptr [esi]
// 005a91e9  8b5004               mov edx, dword ptr [eax + 4]
// 005a91ec  8bce                 mov ecx, esi
// 005a91ee  ffd2                 call edx
// 005a91f0  83f805               cmp eax, 5
// 005a91f3  75ef                 jne 0x5a91e4
// 005a91f5  57                   push edi
// 005a91f6  8bce                 mov ecx, esi
// 005a91f8  e803b10500           call 0x604300
// 005a91fd  5f                   pop edi
// 005a91fe  5e                   pop esi
// 005a91ff  c20400               ret 4

struct VHumanoidSignalDesc {
    char pad[0x34];
    void* field_34;
    void func(void*);
};

struct Node {
    void* field_0;
    void* field_4;
    void* field_8;
    int getType();
};

extern "C" void* __stdcall sub_5b4830(void*);
extern "C" void __stdcall sub_604300(void*, void*);

void VHumanoidSignalDesc::func(void* arg)
{
    void* p = sub_5b4830(arg);
    if (p) {
        Node* q = (Node*)this->field_34;
        while (q->getType() != 5) {
            q = (Node*)q->field_8;
        }
        sub_604300(q, p);
    }
}
