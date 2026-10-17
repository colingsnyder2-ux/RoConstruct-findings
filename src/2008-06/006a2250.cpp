// from server: 63% by colin
struct SectionHeader {
    unsigned char reserved[36];
    unsigned long characteristics;
};

extern "C" unsigned char __ImageBase;
extern "C" int __cdecl ValidateImageBase(const unsigned char *);
extern "C" SectionHeader * __cdecl FindPESection(
    const unsigned char *, unsigned long);

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
    __except (1) {
        return 0;
    }
}
