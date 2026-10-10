// from server: 51% by colin
extern "C" void* __cdecl sub_52C940(void*, int);

int g_8bb96c;
void* g_8bb968;

void __cdecl sub_438FA0() {
    __try {
        if (!(g_8bb96c & 1)) {
            g_8bb96c |= 1;
            g_8bb968 = sub_52C940((void*)0x8a28dc, 0);
        }
    } __except (1) {
    }
}
