// from server: 74% by colin
// roc 2008-06 00577460  unit: RBX::DataModel  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577460
//
// 00577460  56                   push esi
// 00577461  8bf1                 mov esi, ecx
// 00577463  80be5902000000       cmp byte ptr [esi + 0x259], 0
// 0057746a  743b                 je 0x5774a7
// 0057746c  8b442408             mov eax, dword ptr [esp + 8]
// 00577470  833800               cmp dword ptr [eax], 0
// 00577473  7406                 je 0x57747b
// 00577475  50                   push eax
// 00577476  e825e7ffff           call 0x575ba0
// 0057747b  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 00577481  8b80b4010000         mov eax, dword ptr [eax + 0x1b4]
// 00577487  83e801               sub eax, 1
// 0057748a  741b                 je 0x5774a7
// 0057748c  c644240800           mov byte ptr [esp + 8], 0
// 00577491  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577495  51                   push ecx
// 00577496  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0057749c  81c144030000         add ecx, 0x344
// 005774a2  e899f4ffff           call 0x576940
// 005774a7  5e                   pop esi
// 005774a8  c20400               ret 4

struct S_func_00577460 {
    char pad0[0x204];
    char m_field204[0x4];
    char pad208[0x51];
    char m_field259;
    void f(int* arg);
};

extern "C" void __stdcall sub_00575ba0(int* arg);
extern "C" void __stdcall sub_00576940(void* arg);

void S_func_00577460::f(int* arg)
{
    if (m_field259 != 0) {
        if (*arg != 0) {
            sub_00575ba0(arg);
        }
        int* p = *(int**)((char*)this + 0x20c);
        int v = *(int*)((char*)p + 0x1b4);
        if (v - 1 != 0) {
            char local = 0;
            sub_00576940((char*)this + 0x204 + 0x344);
        }
    }
}
