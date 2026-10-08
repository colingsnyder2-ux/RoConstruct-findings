// from server: 68% by colin
// roc 2007-08 0058ba00  unit: RBX::SoundService  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058ba00
//
// 0058ba00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058ba04  8d442404             lea eax, [esp + 4]
// 0058ba08  50                   push eax
// 0058ba09  51                   push ecx
// 0058ba0a  e82f420a00           call 0x62fc3e
// 0058ba0f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058ba13  85c9                 test ecx, ecx
// 0058ba15  7410                 je 0x58ba27
// 0058ba17  56                   push esi
// 0058ba18  8bf1                 mov esi, ecx
// 0058ba1a  e831d2ffff           call 0x588c50
// 0058ba1f  8bce                 mov ecx, esi
// 0058ba21  e8bafdffff           call 0x58b7e0
// 0058ba26  5e                   pop esi
// 0058ba27  33c0                 xor eax, eax
// 0058ba29  c21400               ret 0x14

struct SoundService {
    void sub_58B7E0();
    void sub_588C50();
    void sub_62FC3E(void*);
    int func(int, int, int, int, int);
};

int SoundService::func(int a1, int a2, int a3, int a4, int a5)
{
    int local = a1;
    sub_62FC3E(&local);
    int* p = &local;
    if (*p != 0) {
        SoundService* s = (SoundService*)*p;
        s->sub_588C50();
        s->sub_58B7E0();
    }
    return 0;
}
