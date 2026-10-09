// from server: 39% by colin
// roc 2007-08 005bc870  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bc870
//
// 005bc870  d901                 fld dword ptr [ecx]
// 005bc872  8b542404             mov edx, dword ptr [esp + 4]
// 005bc876  d81a                 fcomp dword ptr [edx]
// 005bc878  dfe0                 fnstsw ax
// 005bc87a  f6c441               test ah, 0x41
// 005bc87d  7a48                 jp 0x5bc8c7
// 005bc87f  d94104               fld dword ptr [ecx + 4]
// 005bc882  d85a04               fcomp dword ptr [edx + 4]
// 005bc885  dfe0                 fnstsw ax
// 005bc887  f6c441               test ah, 0x41
// 005bc88a  7a3b                 jp 0x5bc8c7
// 005bc88c  d94108               fld dword ptr [ecx + 8]
// 005bc88f  d85a08               fcomp dword ptr [edx + 8]
// 005bc892  dfe0                 fnstsw ax
// 005bc894  f6c441               test ah, 0x41
// 005bc897  7a2e                 jp 0x5bc8c7
// 005bc899  d9410c               fld dword ptr [ecx + 0xc]
// 005bc89c  d81a                 fcomp dword ptr [edx]
// 005bc89e  dfe0                 fnstsw ax
// 005bc8a0  f6c401               test ah, 1
// 005bc8a3  7522                 jne 0x5bc8c7
// 005bc8a5  d94110               fld dword ptr [ecx + 0x10]
// 005bc8a8  d85a04               fcomp dword ptr [edx + 4]
// 005bc8ab  dfe0                 fnstsw ax
// 005bc8ad  f6c401               test ah, 1
// 005bc8b0  7515                 jne 0x5bc8c7
// 005bc8b2  d94114               fld dword ptr [ecx + 0x14]
// 005bc8b5  d85a08               fcomp dword ptr [edx + 8]
// 005bc8b8  dfe0                 fnstsw ax
// 005bc8ba  f6c401               test ah, 1
// 005bc8bd  7508                 jne 0x5bc8c7
// 005bc8bf  b801000000           mov eax, 1
// 005bc8c4  c20400               ret 4
// 005bc8c7  33c0                 xor eax, eax
// 005bc8c9  c20400               ret 4

struct EnumPropDescriptor
{
    float f0;
    float f4;
    float f8;
    float fc;
    float f10;
    float f14;

    bool equals(const EnumPropDescriptor& other) const;
};

bool EnumPropDescriptor::equals(const EnumPropDescriptor& other) const
{
    if (f0 == other.f0)
    {
        if (f4 == other.f4)
        {
            if (f8 == other.f8)
            {
                if (fc >= other.f0)
                {
                    if (f10 >= other.f4)
                    {
                        if (f14 >= other.f8)
                        {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}
