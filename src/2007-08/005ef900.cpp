// from server: 87% by colin
// roc 2007-08 005ef900  unit: RBX::BodyMover  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ef900
//
// 005ef900  53                   push ebx
// 005ef901  56                   push esi
// 005ef902  57                   push edi
// 005ef903  8bf9                 mov edi, ecx
// 005ef905  85ff                 test edi, edi
// 005ef907  7408                 je 0x5ef911
// 005ef909  8d9ff0000000         lea ebx, [edi + 0xf0]
// 005ef90f  eb02                 jmp 0x5ef913
// 005ef911  33db                 xor ebx, ebx
// 005ef913  8b742410             mov esi, dword ptr [esp + 0x10]
// 005ef917  85f6                 test esi, esi
// 005ef919  7417                 je 0x5ef932
// 005ef91b  8bce                 mov ecx, esi
// 005ef91d  e89e15e6ff           call 0x450ec0
// 005ef922  85c0                 test eax, eax
// 005ef924  740c                 je 0x5ef932
// 005ef926  53                   push ebx
// 005ef927  8d8800010000         lea ecx, [eax + 0x100]
// 005ef92d  e8fe2be4ff           call 0x432530
// 005ef932  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ef936  50                   push eax
// 005ef937  56                   push esi
// 005ef938  8bcf                 mov ecx, edi
// 005ef93a  e811b1f8ff           call 0x57aa50
// 005ef93f  8bcf                 mov ecx, edi
// 005ef941  e81affffff           call 0x5ef860
// 005ef946  5f                   pop edi
// 005ef947  5e                   pop esi
// 005ef948  5b                   pop ebx
// 005ef949  c20800               ret 8

struct BodyMover {
    void func_005ef900(int, int);
};

extern "C" int __fastcall sub_00450ec0(void*);
extern "C" void __fastcall sub_00432530(void*, void*);
extern "C" void __fastcall sub_0057aa50(void*, int, int);
extern "C" void __fastcall sub_005ef860(void*);

void BodyMover::func_005ef900(int a, int b)
{
    char* ebx;
    if (this)
        ebx = (char*)this + 0xf0;
    else
        ebx = 0;

    if (a) {
        int eax = sub_00450ec0((void*)a);
        if (eax)
            sub_00432530((void*)(eax + 0x100), ebx);
    }

    sub_0057aa50(this, a, b);
    sub_005ef860(this);
}
