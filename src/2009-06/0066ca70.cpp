// roc 2009-06 0066ca70  unit: RBX::VHumanoid::?$EventDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066ca70
//
// 0066ca70  0fb6442404           movzx eax, byte ptr [esp + 4]
// 0066ca75  89442404             mov dword ptr [esp + 4], eax
// 0066ca79  b801000000           mov eax, 1
// 0066ca7e  db442404             fild dword ptr [esp + 4]
// 0066ca82  84050cdba400         test byte ptr [0xa4db0c], al
// 0066ca88  7512                 jne 0x66ca9c
// 0066ca8a  d9051c338e00         fld dword ptr [0x8e331c]
// 0066ca90  09050cdba400         or dword ptr [0xa4db0c], eax
// 0066ca96  d91d08dba400         fstp dword ptr [0xa4db08]
// 0066ca9c  d80d08dba400         fmul dword ptr [0xa4db08]
// 0066caa2  d82558fe8b00         fsub dword ptr [0x8bfe58]
// 0066caa8  c3                   ret 
// copied from an identical function in another client (function ?convert@@YANE@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern const float scaleValue;
extern const float offsetValue;

double convert(unsigned char value)
{
    double converted = value;
    static float scale = scaleValue;
    return converted * scale - offsetValue;
}