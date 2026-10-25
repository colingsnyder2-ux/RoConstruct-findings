// from server: 100% by king_originala
// roc 2008-06 005dda30  unit: RBX::Message  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dda30
//
// 005dda30  0fb6442404           movzx eax, byte ptr [esp + 4]
// 005dda35  89442404             mov dword ptr [esp + 4], eax
// 005dda39  b801000000           mov eax, 1
// 005dda3e  db442404             fild dword ptr [esp + 4]
// 005dda42  840588a69700         test byte ptr [0x97a688], al
// 005dda48  7512                 jne 0x5dda5c
// 005dda4a  d90540db8300         fld dword ptr [0x83db40]
// 005dda50  090588a69700         or dword ptr [0x97a688], eax
// 005dda56  d91d84a69700         fstp dword ptr [0x97a684]
// 005dda5c  d80d84a69700         fmul dword ptr [0x97a684]
// 005dda62  d82578e38100         fsub dword ptr [0x81e378]
// 005dda68  c3                   ret 

extern const float scaleValue;
extern const float offsetValue;

double convert(unsigned char value)
{
    double converted = value;
    static float scale = scaleValue;
    return converted * scale - offsetValue;
}
