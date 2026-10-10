// from server: 58% by colin
struct S_func_0051e990 {
    char pad[0x44];
    void (__stdcall *m_pfn)(S_func_0051e990*, char*);
    char pad2[0x24];
    unsigned int m_flags;
};

extern "C" void __cdecl func_0051e760(char*);

void __stdcall func_0051e990(S_func_0051e990* self, char* arg)
{
    unsigned int i = 0;
    if ((self->m_flags & 0xc0000) != 0 && arg[0] == '#') {
        i = 1;
        while (i < 0xf) {
            if (arg[i] == ' ')
                break;
            if (arg[i + 1] == ' ') {
                i++;
                break;
            }
            i += 2;
        }
    }
    char* p = arg + i;
    if (self->m_pfn) {
        self->m_pfn(self, p);
    } else {
        func_0051e760(p);
    }
}
