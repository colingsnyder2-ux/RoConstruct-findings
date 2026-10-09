// from server: 80% by colin
// roc 2007-08 0060b720  unit: CXTCaptionButtonTheme  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060b720
//
// 0060b720  83ec0c               sub esp, 0xc
// 0060b723  56                   push esi
// 0060b724  57                   push edi
// 0060b725  8bf1                 mov esi, ecx
// 0060b727  e8d449f2ff           call 0x530100
// 0060b72c  8d442408             lea eax, [esp + 8]
// 0060b730  50                   push eax
// 0060b731  8bce                 mov ecx, esi
// 0060b733  e85869fdff           call 0x5e2090
// 0060b738  81c684000000         add esi, 0x84
// 0060b73e  56                   push esi
// 0060b73f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0060b743  8bce                 mov ecx, esi
// 0060b745  8bf8                 mov edi, eax
// 0060b747  e884deefff           call 0x5095d0
// 0060b74c  d907                 fld dword ptr [edi]
// 0060b74e  d95e24               fstp dword ptr [esi + 0x24]
// 0060b751  8bc6                 mov eax, esi
// 0060b753  d94704               fld dword ptr [edi + 4]
// 0060b756  d95e28               fstp dword ptr [esi + 0x28]
// 0060b759  d94708               fld dword ptr [edi + 8]
// 0060b75c  5f                   pop edi
// 0060b75d  d95e2c               fstp dword ptr [esi + 0x2c]
// 0060b760  5e                   pop esi
// 0060b761  83c40c               add esp, 0xc
// 0060b764  c20400               ret 4

struct CXTCaptionButtonTheme {
    char pad[0x84];
    void sub_530100();
    void* sub_5E2090(void*);
    void sub_5095D0(void*);
    void* method(void*);
};

void* CXTCaptionButtonTheme::method(void* arg) {
    float tmp[3];
    sub_530100();
    float* p = (float*)sub_5E2090(tmp);
    sub_5095D0((char*)this + 0x84);
    *(float*)((char*)arg + 0x24) = p[0];
    *(float*)((char*)arg + 0x28) = p[1];
    *(float*)((char*)arg + 0x2c) = p[2];
    return arg;
}
