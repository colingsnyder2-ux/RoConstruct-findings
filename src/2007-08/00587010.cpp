// from server: 91% by colin
// roc 2007-08 00587010  unit: RBX::DropperTool  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587010
//
// 00587010  8b442404             mov eax, dword ptr [esp + 4]
// 00587014  56                   push esi
// 00587015  68e46e8c00           push 0x8c6ee4
// 0058701a  6a00                 push 0
// 0058701c  50                   push eax
// 0058701d  8bf1                 mov esi, ecx
// 0058701f  e89ccd0500           call 0x5e3dc0
// 00587024  85c0                 test eax, eax
// 00587026  7433                 je 0x58705b
// 00587028  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 0058702e  390538288a00         cmp dword ptr [0x8a2838], eax
// 00587034  7410                 je 0x587046
// 00587036  50                   push eax
// 00587037  b920288a00           mov ecx, 0x8a2820
// 0058703c  a338288a00           mov dword ptr [0x8a2838], eax
// 00587041  e85aa6eaff           call 0x4316a0
// 00587046  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00587049  6a04                 push 4
// 0058704b  51                   push ecx
// 0058704c  e8bfaafdff           call 0x561b10
// 00587051  83c404               add esp, 4
// 00587054  8bc8                 mov ecx, eax
// 00587056  e8b5570000           call 0x58c810
// 0058705b  33c0                 xor eax, eax
// 0058705d  5e                   pop esi
// 0058705e  c20400               ret 4

struct S_func_00587010 {
    char pad[0x18];
    void* field_18;
    void onMouseDown(void*);
};

extern "C" void* __stdcall sub_5e3dc0(void*, int, void*);
extern "C" void __stdcall sub_4316a0(void*, int);
extern "C" void* __stdcall sub_561b10(void*, int);
extern "C" void __stdcall sub_58c810(void*);

extern int dword_8a2838;
extern int dword_8a2820;

void S_func_00587010::onMouseDown(void* arg)
{
    void* p = sub_5e3dc0(arg, 0, (void*)0x8c6ee4);
    if (p) {
        int v = *(int*)((char*)p + 0x194);
        if (dword_8a2838 != v) {
            dword_8a2838 = v;
            sub_4316a0(&dword_8a2820, v);
        }
        void* q = sub_561b10(field_18, 4);
        sub_58c810(q);
    }
}
