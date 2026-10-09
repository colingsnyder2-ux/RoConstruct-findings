// from server: 73% by colin
// roc 2007-08 00673c40  unit: CXTPCustomizeSheet::CCustomizeButton  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673c40
//
// 00673c40  83ec10               sub esp, 0x10
// 00673c43  56                   push esi
// 00673c44  8bf1                 mov esi, ecx
// 00673c46  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00673c4c  57                   push edi
// 00673c4d  e87e29fdff           call 0x6465d0
// 00673c52  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00673c58  8bf8                 mov edi, eax
// 00673c5a  e8f1fcfcff           call 0x643950
// 00673c5f  8bc8                 mov ecx, eax
// 00673c61  e8eafafcff           call 0x643750
// 00673c66  8d442408             lea eax, [esp + 8]
// 00673c6a  50                   push eax
// 00673c6b  6a64                 push 0x64
// 00673c6d  57                   push edi
// 00673c6e  8bce                 mov ecx, esi
// 00673c70  e89b6bfcff           call 0x63a810
// 00673c75  85c0                 test eax, eax
// 00673c77  7517                 jne 0x673c90
// 00673c79  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00673c7f  8b5720               mov edx, dword ptr [edi + 0x20]
// 00673c82  50                   push eax
// 00673c83  51                   push ecx
// 00673c84  6811010000           push 0x111
// 00673c89  52                   push edx
// 00673c8a  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00673c90  5f                   pop edi
// 00673c91  5e                   pop esi
// 00673c92  83c410               add esp, 0x10
// 00673c95  c3                   ret 

struct CXTPCustomizeSheet_CCustomizeButton {
    void func_00673c40();
};

extern "C" int __stdcall SendMessageA(int, unsigned int, int, int);

struct Sub_006465D0 {
    int get();
};

struct Sub_00643950 {
    int get();
};

struct Sub_00643750 {
    int get();
};

void CXTPCustomizeSheet_CCustomizeButton::func_00673c40()
{
    int local;
    int result;
    int v;

    result = ((Sub_006465D0*)(*(int*)((char*)this + 0xfc)))->get();
    v = ((Sub_00643950*)(*(int*)((char*)this + 0xfc)))->get();
    ((Sub_00643750*)v)->get();

    result = ((int (__thiscall*)(CXTPCustomizeSheet_CCustomizeButton*, int, int, int*))0x63a810)(this, result, 0x64, &local);
    if (result == 0) {
        SendMessageA(*(int*)((char*)this + 0x84), 0x111, *(int*)(result + 0x20), 0);
    }
}
