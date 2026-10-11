// from server: 76% by tester
// roc 2008-06 00411640  unit: CBrush  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411640
//
// 00411640  56                   push esi
// 00411641  6840404000           push 0x404040
// 00411646  8bf1                 mov esi, ecx
// 00411648  ff1558218000         call dword ptr [0x802158]
// 0041164e  50                   push eax
// 0041164f  8d8e94000000         lea ecx, [esi + 0x94]
// 00411655  e808f62800           call 0x6a0c62
// 0041165a  8b442408             mov eax, dword ptr [esp + 8]
// 0041165e  50                   push eax
// 0041165f  8bce                 mov ecx, esi
// 00411661  e81af62800           call 0x6a0c80
// 00411666  83f8ff               cmp eax, -1
// 00411669  7506                 jne 0x411671
// 0041166b  0bc0                 or eax, eax
// 0041166d  5e                   pop esi
// 0041166e  c20400               ret 4
// 00411671  833d60e0970000       cmp dword ptr [0x97e060], 0
// 00411678  750a                 jne 0x411684
// 0041167a  6a00                 push 0
// 0041167c  e81fda2900           call 0x6af0a0
// 00411681  83c404               add esp, 4
// 00411684  a160e09700           mov eax, dword ptr [0x97e060]
// 00411689  05f8000000           add eax, 0xf8
// 0041168e  7403                 je 0x411693
// 00411690  8b4004               mov eax, dword ptr [eax + 4]
// 00411693  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00411696  6a01                 push 1
// 00411698  50                   push eax
// 00411699  6a30                 push 0x30
// 0041169b  51                   push ecx
// 0041169c  ff15142e8000         call dword ptr [0x802e14]
// 004116a2  8b1580b79200         mov edx, dword ptr [0x92b780]
// 004116a8  52                   push edx
// 004116a9  8bce                 mov ecx, esi
// 004116ab  e86af52800           call 0x6a0c1a
// 004116b0  33c0                 xor eax, eax
// 004116b2  5e                   pop esi
// 004116b3  c20400               ret 4

struct CBrush {
    char pad[0x20];
    int field_20;
    char pad2[0x74];
    int field_94;
    int sub_6a0c62(int);
    int sub_6a0c80(int);
    int sub_6a0c1a(int);
    int method(int);
};

extern "C" void* __stdcall CreateSolidBrush(unsigned int);
extern "C" int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
extern "C" int __stdcall sub_6af0a0(int);

extern int g_97e060;
extern int g_92b780;

int CBrush::method(int a) {
    int brush = (int)CreateSolidBrush(0x404040);
    ((CBrush*)((char*)this + 0x94))->sub_6a0c62(brush);
    int r = sub_6a0c80(a);
    if (r == -1) {
        return r;
    }
    if (g_97e060 == 0) {
        sub_6af0a0(0);
    }
    int p = g_97e060;
    p += 0xf8;
    if (p != 0) {
        p = *(int*)(p + 4);
    }
    SendMessageA((void*)field_20, 0x30, (unsigned int)p, 1);
    sub_6a0c1a(g_92b780);
    return 0;
}
