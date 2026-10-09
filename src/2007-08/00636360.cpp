// from server: 91% by colin
// roc 2007-08 00636360  unit: CXTPControlComboBoxList  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636360
//
// 00636360  53                   push ebx
// 00636361  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00636365  55                   push ebp
// 00636366  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0063636a  56                   push esi
// 0063636b  57                   push edi
// 0063636c  8d442418             lea eax, [esp + 0x18]
// 00636370  50                   push eax
// 00636371  53                   push ebx
// 00636372  55                   push ebp
// 00636373  8bf1                 mov esi, ecx
// 00636375  e8168d0600           call 0x69f090
// 0063637a  8bc8                 mov ecx, eax
// 0063637c  e80d201000           call 0x73838e
// 00636381  837c241800           cmp dword ptr [esp + 0x18], 0
// 00636386  8bf8                 mov edi, eax
// 00636388  751d                 jne 0x6363a7
// 0063638a  8b16                 mov edx, dword ptr [esi]
// 0063638c  8b82f8010000         mov eax, dword ptr [edx + 0x1f8]
// 00636392  8bce                 mov ecx, esi
// 00636394  ffd0                 call eax
// 00636396  3bc7                 cmp eax, edi
// 00636398  740d                 je 0x6363a7
// 0063639a  8b16                 mov edx, dword ptr [esi]
// 0063639c  8b8208020000         mov eax, dword ptr [edx + 0x208]
// 006363a2  57                   push edi
// 006363a3  8bce                 mov ecx, esi
// 006363a5  ffd0                 call eax
// 006363a7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006363ab  53                   push ebx
// 006363ac  55                   push ebp
// 006363ad  51                   push ecx
// 006363ae  8bce                 mov ecx, esi
// 006363b0  e8eb2f0400           call 0x6793a0
// 006363b5  5f                   pop edi
// 006363b6  5e                   pop esi
// 006363b7  5d                   pop ebp
// 006363b8  5b                   pop ebx
// 006363b9  c20c00               ret 0xc

struct CXTPControlComboBoxList {
    int sub_636360(int, int, int);
};

extern "C" int __stdcall sub_69F090(int, int, int*);
extern "C" int __stdcall sub_73838E(int);
extern "C" int __stdcall sub_6793A0(int, int, int, int);

int CXTPControlComboBoxList::sub_636360(int a1, int a2, int a3) {
    int v4;
    int v5 = sub_69F090(a1, a2, &v4);
    int v6 = sub_73838E(v5);
    if (v4 == 0) {
        int v7 = (*(int (__thiscall **)(CXTPControlComboBoxList*))(*(int*)this + 0x1f8))(this);
        if (v7 != v6) {
            (*(void (__thiscall **)(CXTPControlComboBoxList*, int))(*(int*)this + 0x208))(this, v6);
        }
    }
    return sub_6793A0(a3, a1, a2, (int)this);
}
