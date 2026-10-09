// from server: 91% by colin
// roc 2007-08 00718fd0  unit: CXTPRibbonQuickAccessControls  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00718fd0
//
// 00718fd0  56                   push esi
// 00718fd1  8bf1                 mov esi, ecx
// 00718fd3  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00718fd6  33c0                 xor eax, eax
// 00718fd8  85d2                 test edx, edx
// 00718fda  7e44                 jle 0x719020
// 00718fdc  57                   push edi
// 00718fdd  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00718fe1  85c0                 test eax, eax
// 00718fe3  7c0c                 jl 0x718ff1
// 00718fe5  3bc2                 cmp eax, edx
// 00718fe7  7d08                 jge 0x718ff1
// 00718fe9  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00718fec  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00718fef  eb02                 jmp 0x718ff3
// 00718ff1  33c9                 xor ecx, ecx
// 00718ff3  3bcf                 cmp ecx, edi
// 00718ff5  740c                 je 0x719003
// 00718ff7  83c001               add eax, 1
// 00718ffa  3bc2                 cmp eax, edx
// 00718ffc  7ce3                 jl 0x718fe1
// 00718ffe  5f                   pop edi
// 00718fff  5e                   pop esi
// 00719000  c20400               ret 4
// 00719003  6a01                 push 1
// 00719005  50                   push eax
// 00719006  8d4e24               lea ecx, [esi + 0x24]
// 00719009  e8a296fbff           call 0x6d26b0
// 0071900e  8b16                 mov edx, dword ptr [esi]
// 00719010  8b4264               mov eax, dword ptr [edx + 0x64]
// 00719013  57                   push edi
// 00719014  8bce                 mov ecx, esi
// 00719016  ffd0                 call eax
// 00719018  8bcf                 mov ecx, edi
// 0071901a  e8c571f1ff           call 0x6301e4
// 0071901f  5f                   pop edi
// 00719020  5e                   pop esi
// 00719021  c20400               ret 4

struct CXTPRibbonQuickAccessControls {
    int unknown0;
    int unknown4;
    int unknown8;
    int unknownC;
    int unknown10;
    int unknown14;
    int unknown18;
    int unknown1C;
    int unknown20;
    int unknown24;
    int unknown28;
    int unknown2C;
    void Remove(int item);
};

extern "C" void __stdcall sub_6D26B0(void* p, int index, int count);
extern "C" void __stdcall sub_6301E4(int item);

void CXTPRibbonQuickAccessControls::Remove(int item)
{
    int count = this->unknown2C;
    int i = 0;
    if (count > 0)
    {
        while (1)
        {
            int current;
            if (i >= 0 && i < count)
                current = ((int *)this->unknown28)[i];
            else
                current = 0;
            if (current == item)
                break;
            i++;
            if (i >= count)
                return;
        }
        sub_6D26B0(&this->unknown24, i, 1);
        void (__thiscall *fn)(CXTPRibbonQuickAccessControls*, int) = *(void (__thiscall **)(CXTPRibbonQuickAccessControls*, int))((*(int *)this) + 0x64);
        fn(this, item);
        sub_6301E4(item);
    }
}
