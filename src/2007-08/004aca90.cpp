// from DeepSeek/server: 100% by colin
// roc 2007-08 004aca90  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004aca90
//
// 004aca90  83ec08               sub esp, 8
// 004aca93  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004aca97  56                   push esi
// 004aca98  8bf1                 mov esi, ecx
// 004aca9a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004aca9e  8d542404             lea edx, [esp + 4]
// 004acaa2  52                   push edx
// 004acaa3  89442408             mov dword ptr [esp + 8], eax
// 004acaa7  894c240c             mov dword ptr [esp + 0xc], ecx
// 004acaab  e820affdff           call 0x4879d0
// 004acab0  83c404               add esp, 4
// 004acab3  84c0                 test al, al
// 004acab5  752b                 jne 0x4acae2
// 004acab7  6a08                 push 8
// 004acab9  c74608f0a34a00       mov dword ptr [esi + 8], 0x4aa3f0
// 004acac0  c706a0914a00         mov dword ptr [esi], 0x4a91a0
// 004acac6  e82b341800           call 0x62fef6
// 004acacb  83c404               add esp, 4
// 004acace  85c0                 test eax, eax
// 004acad0  740d                 je 0x4acadf
// 004acad2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004acad6  8908                 mov dword ptr [eax], ecx
// 004acad8  8b542408             mov edx, dword ptr [esp + 8]
// 004acadc  895004               mov dword ptr [eax + 4], edx
// 004acadf  894604               mov dword ptr [esi + 4], eax
// 004acae2  5e                   pop esi
// 004acae3  83c408               add esp, 8
// 004acae6  c20800               ret 8

struct DeleteInstanceItem {
    int field0;
    int field4;
    int field8;
    void write(int a, int b);
};

extern "C" char __cdecl sub_4879D0(int* a);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void DeleteInstanceItem::write(int a, int b)
{
    int local[2];
    local[0] = a;
    local[1] = b;
    if (!sub_4879D0(local)) {
        this->field8 = 0x4aa3f0;
        this->field0 = 0x4a91a0;
        void* p = sub_62FEF6(8);
        if (p) {
            *(int*)p = local[0];
            *(int*)((char*)p + 4) = local[1];
        }
        this->field4 = (int)p;
    }
}
