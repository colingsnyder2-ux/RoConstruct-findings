// from server: 55% by colin
// roc 2007-08 0057e640  unit: RBX::RootInstance  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057e640
//
// 0057e640  56                   push esi
// 0057e641  8bf1                 mov esi, ecx
// 0057e643  e88899feff           call 0x567fd0
// 0057e648  f644240801           test byte ptr [esp + 8], 1
// 0057e64d  8b8698020000         mov eax, dword ptr [esi + 0x298]
// 0057e653  c78694020000ac4c7a00 mov dword ptr [esi + 0x294], 0x7a4cac
// 0057e65d  8b4804               mov ecx, dword ptr [eax + 4]
// 0057e660  c7843198020000a44c7a00 mov dword ptr [ecx + esi + 0x298], 0x7a4ca4
// 0057e66b  740a                 je 0x57e677
// 0057e66d  56                   push esi
// 0057e66e  ff15c4e67700         call dword ptr [0x77e6c4]
// 0057e674  83c404               add esp, 4
// 0057e677  8bc6                 mov eax, esi
// 0057e679  5e                   pop esi
// 0057e67a  c20400               ret 4

extern "C" void __stdcall free(void*);

struct RootInstance {
    char pad[0x294];
    int field_294;
    int field_298;
    void sub_567FD0();
    ~RootInstance();
};

void RootInstance::sub_567FD0() {}

RootInstance::~RootInstance()
{
    sub_567FD0();
    int* p = (int*)field_298;
    field_294 = 0x7a4cac;
    int* q = (int*)p[1];
    *(int*)((char*)q + (int)this + 0x298) = 0x7a4ca4;
    if ((*(unsigned char*)((char*)this - 4) & 1) == 0) {
        return;
    }
    free(this);
}
