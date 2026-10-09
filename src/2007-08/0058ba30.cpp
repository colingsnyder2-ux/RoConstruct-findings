// from server: 100% by colin
// roc 2007-08 0058ba30  unit: RBX::SoundService  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058ba30
//
// 0058ba30  56                   push esi
// 0058ba31  8bf1                 mov esi, ecx
// 0058ba33  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 0058ba39  85c0                 test eax, eax
// 0058ba3b  7408                 je 0x58ba45
// 0058ba3d  6a01                 push 1
// 0058ba3f  50                   push eax
// 0058ba40  e8ff410a00           call 0x62fc44
// 0058ba45  8bce                 mov ecx, esi
// 0058ba47  e894fdffff           call 0x58b7e0
// 0058ba4c  83be2001000000       cmp dword ptr [esi + 0x120], 0
// 0058ba53  7416                 je 0x58ba6b
// 0058ba55  68e8338c00           push 0x8c33e8
// 0058ba5a  8bce                 mov ecx, esi
// 0058ba5c  c7862001000000000000 mov dword ptr [esi + 0x120], 0
// 0058ba66  e8a58cebff           call 0x444710
// 0058ba6b  5e                   pop esi
// 0058ba6c  c3                   ret 

struct SoundService {
    char pad[0xf4];
    void* field_f4;
    char pad2[0x120 - 0xf8];
    void* field_120;
    void sub_58b7e0();
    void sub_444710(void*);
    void destructor();
};

void __stdcall sub_62fc44(void*, int);

void SoundService::destructor() {
    if (field_f4) {
        sub_62fc44(field_f4, 1);
    }
    sub_58b7e0();
    if (field_120) {
        field_120 = 0;
        sub_444710((void*)0x8c33e8);
    }
}
