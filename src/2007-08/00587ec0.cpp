// from server: 68% by colin
// roc 2007-08 00587ec0  unit: RBX::SoundChannel  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587ec0
//
// 00587ec0  51                   push ecx
// 00587ec1  56                   push esi
// 00587ec2  8bf1                 mov esi, ecx
// 00587ec4  8b460c               mov eax, dword ptr [esi + 0xc]
// 00587ec7  85c0                 test eax, eax
// 00587ec9  57                   push edi
// 00587eca  8dbe18ffffff         lea edi, [esi - 0xe8]
// 00587ed0  7422                 je 0x587ef4
// 00587ed2  8d4c240b             lea ecx, [esp + 0xb]
// 00587ed6  51                   push ecx
// 00587ed7  50                   push eax
// 00587ed8  e8077d0a00           call 0x62fbe4
// 00587edd  83f824               cmp eax, 0x24
// 00587ee0  7412                 je 0x587ef4
// 00587ee2  807c240b00           cmp byte ptr [esp + 0xb], 0
// 00587ee7  750b                 jne 0x587ef4
// 00587ee9  8b560c               mov edx, dword ptr [esi + 0xc]
// 00587eec  52                   push edx
// 00587eed  8bcf                 mov ecx, edi
// 00587eef  e83cfaffff           call 0x587930
// 00587ef4  5f                   pop edi
// 00587ef5  5e                   pop esi
// 00587ef6  59                   pop ecx
// 00587ef7  c20c00               ret 0xc

struct SoundChannel {
    char pad[0xc];
    int field_c;
    void sub_587930(int);

    void sub_587ec0(int, int, int);
};

extern "C" int __stdcall sub_62fbe4(int, char*);

void SoundChannel::sub_587ec0(int, int, int) {
    int v = this->field_c;
    SoundChannel* base = (SoundChannel*)((char*)this - 0xe8);
    if (v != 0) {
        char flag = 0;
        int r = sub_62fbe4(v, &flag);
        if (r != 0x24 && flag == 0) {
            base->sub_587930(this->field_c);
        }
    }
}
