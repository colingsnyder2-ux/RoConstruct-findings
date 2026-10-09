// from server: 42% by colin
// roc 2007-08 0055e7c0  unit: RBX::FixedCameraCommand  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e7c0

extern "C" int __cdecl sub_554B20();

int g_8c230c;
int g_8c2310;

void sub_55E7C0()
{
    __try {
        if (!(g_8c2310 & 1)) {
            g_8c2310 |= 1;
            g_8c230c = sub_554B20();
        }
    } __except (1) {
    }
}
