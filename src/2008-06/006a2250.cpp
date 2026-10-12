// from server: 60% by king_originala
struct SectionHeader {
    unsigned char reserved[36];
    unsigned long characteristics;
};

extern "C" unsigned char __ImageBase;
extern "C" int __cdecl ValidateImageBase(const unsigned char *);
extern "C" SectionHeader * __cdecl FindPESection(
    const unsigned char *, unsigned long);
extern "C" unsigned long __cdecl _exception_code(void);

#pragma strict_gs_check(on)

int __cdecl IsNonwritableInCurrentImage(const unsigned char *target)
{
    const unsigned char *imageBase = &__ImageBase;

    __try {
        if (!ValidateImageBase(imageBase))
            return 0;

        unsigned long offset =
            static_cast<unsigned long>(target - imageBase);
        SectionHeader *section = FindPESection(imageBase, offset);

        if (!section)
            return 0;

        return (section->characteristics & 0x80000000UL) == 0;
    }
    __except (_exception_code() == 0xC0000005UL ? 1 : 0) {
        return 0;
    }
}

#pragma strict_gs_check(off)
