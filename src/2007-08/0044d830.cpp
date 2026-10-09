// from server: 69% by colin
// roc 2007-08 0044d830  unit: ExitCommand  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044d830
//
// 0044d830  56                   push esi
// 0044d831  8bf1                 mov esi, ecx
// 0044d833  57                   push edi
// 0044d834  8b7e04               mov edi, dword ptr [esi + 4]
// 0044d837  85ff                 test edi, edi
// 0044d839  7c42                 jl 0x44d87d
// 0044d83b  8b460c               mov eax, dword ptr [esi + 0xc]
// 0044d83e  85c0                 test eax, eax
// 0044d840  741a                 je 0x44d85c
// 0044d842  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0044d845  2bc8                 sub ecx, eax
// 0044d847  b8398ee338           mov eax, 0x38e38e39
// 0044d84c  f7e9                 imul ecx
// 0044d84e  c1fa03               sar edx, 3
// 0044d851  8bc2                 mov eax, edx
// 0044d853  c1e81f               shr eax, 0x1f
// 0044d856  03c2                 add eax, edx
// 0044d858  3bf8                 cmp edi, eax
// 0044d85a  7206                 jb 0x44d862
// 0044d85c  ff15d8e67700         call dword ptr [0x77e6d8]
// 0044d862  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0044d865  8d04ff               lea eax, [edi + edi*8]
// 0044d868  8d1481               lea edx, [ecx + eax*4]
// 0044d86b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044d86f  52                   push edx
// 0044d870  ff1590e67700         call dword ptr [0x77e690]
// 0044d876  5f                   pop edi
// 0044d877  b001                 mov al, 1
// 0044d879  5e                   pop esi
// 0044d87a  c20400               ret 4
// 0044d87d  5f                   pop edi
// 0044d87e  32c0                 xor al, al
// 0044d880  5e                   pop esi
// 0044d881  c20400               ret 4

struct ExitCommand {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    bool execute(int arg);
};

extern "C" void __stdcall sub_77e6d8();
extern "C" void __stdcall sub_77e690(void*);

bool ExitCommand::execute(int arg)
{
    int idx = this->field4;
    if (idx < 0)
        return false;

    int begin = this->fieldC;
    if (begin != 0)
    {
        int count = (this->field10 - begin) / 36;
        if ((unsigned int)idx >= (unsigned int)count)
            sub_77e6d8();
    }
    else
    {
        sub_77e6d8();
    }

    int* ptr = (int*)(this->fieldC + idx * 36);
    sub_77e690(ptr);
    return true;
}
