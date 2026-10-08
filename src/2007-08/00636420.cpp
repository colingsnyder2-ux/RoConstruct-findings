// from server: 72% by colin
// roc 2007-08 00636420  unit: CPatchedControlComboBox  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636420
//
// 00636420  8b81b0010000         mov eax, dword ptr [ecx + 0x1b0]
// 00636426  85c0                 test eax, eax
// 00636428  7e2b                 jle 0x636455
// 0063642a  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00636430  6a00                 push 0
// 00636432  50                   push eax
// 00636433  e888d60000           call 0x643ac0
// 00636438  8bc8                 mov ecx, eax
// 0063643a  e871750100           call 0x64d9b0
// 0063643f  85c0                 test eax, eax
// 00636441  7412                 je 0x636455
// 00636443  8bc8                 mov ecx, eax
// 00636445  e826d40100           call 0x653870
// 0063644a  8bc8                 mov ecx, eax
// 0063644c  8b442404             mov eax, dword ptr [esp + 4]
// 00636450  83c102               add ecx, 2
// 00636453  0108                 add dword ptr [eax], ecx
// 00636455  c20400               ret 4

struct CPatchedControlComboBox
{
    char pad[0xfc];
    int field_fc;
    char pad2[0x1b0 - 0xfc - 4];
    int field_1b0;
    void method(int* out);
};

extern "C" int __stdcall sub_643ac0(int, int);
extern "C" int __stdcall sub_64d9b0(int);
extern "C" int __stdcall sub_653870(int);

void CPatchedControlComboBox::method(int* out)
{
    if (field_1b0 > 0)
    {
        int v = sub_643ac0(field_fc, field_1b0);
        int r = sub_64d9b0(v);
        if (r != 0)
        {
            int r2 = sub_653870(r);
            *out += r2 + 2;
        }
    }
}
