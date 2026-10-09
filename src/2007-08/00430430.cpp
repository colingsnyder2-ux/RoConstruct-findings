// from server: 79% by colin
// roc 2007-08 00430430  unit: CPatchedControlComboBox  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430430
//
// 00430430  53                   push ebx
// 00430431  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00430435  56                   push esi
// 00430436  53                   push ebx
// 00430437  8bf1                 mov esi, ecx
// 00430439  e8725c2000           call 0x6360b0
// 0043043e  85c0                 test eax, eax
// 00430440  7505                 jne 0x430447
// 00430442  5e                   pop esi
// 00430443  5b                   pop ebx
// 00430444  c20400               ret 4
// 00430447  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 0043044d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00430450  8b35d8ec7700         mov esi, dword ptr [0x77ecd8]
// 00430456  57                   push edi
// 00430457  6a00                 push 0
// 00430459  6a00                 push 0
// 0043045b  688b010000           push 0x18b
// 00430460  50                   push eax
// 00430461  ffd6                 call esi
// 00430463  6a00                 push 0
// 00430465  8bf8                 mov edi, eax
// 00430467  8b836c010000         mov eax, dword ptr [ebx + 0x16c]
// 0043046d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00430470  6a00                 push 0
// 00430472  688b010000           push 0x18b
// 00430477  51                   push ecx
// 00430478  ffd6                 call esi
// 0043047a  33d2                 xor edx, edx
// 0043047c  3bf8                 cmp edi, eax
// 0043047e  0f94c2               sete dl
// 00430481  5f                   pop edi
// 00430482  5e                   pop esi
// 00430483  5b                   pop ebx
// 00430484  8bc2                 mov eax, edx
// 00430486  c20400               ret 4

struct CPatchedControlComboBox {
    char pad[0x16c];
    void* field_16c;
    int sub_430430(void* other);
};

extern "C" void* __stdcall sub_6360B0(void*);
extern "C" void* (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);

int CPatchedControlComboBox::sub_430430(void* other) {
    if (!sub_6360B0(other))
        return 0;
    void* a = *(void**)((char*)this->field_16c + 0x20);
    void* b = *(void**)((char*)((CPatchedControlComboBox*)other)->field_16c + 0x20);
    void* r1 = SendMessageA(a, 0x18b, 0, 0);
    void* r2 = SendMessageA(b, 0x18b, 0, 0);
    return r1 == r2;
}
