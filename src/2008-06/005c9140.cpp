// from server: 100% by king_originala
// roc 2008-06 005c9140  unit: RBX::LaserTool  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9140
//
// 005c9140  8b442404             mov eax, dword ptr [esp + 4]
// 005c9144  8b00                 mov eax, dword ptr [eax]
// 005c9146  50                   push eax
// 005c9147  89442408             mov dword ptr [esp + 8], eax
// 005c914b  db442408             fild dword ptr [esp + 8]
// 005c914f  68d0358100           push 0x8135d0
// 005c9154  85c0                 test eax, eax
// 005c9156  7d06                 jge 0x5c915e
// 005c9158  dc0540128100         fadd qword ptr [0x811240]
// 005c915e  83ec08               sub esp, 8
// 005c9161  dd1c24               fstp qword ptr [esp]
// 005c9164  51                   push ecx
// 005c9165  e8b6fdffff           call 0x5c8f20
// 005c916a  83c414               add esp, 0x14
// 005c916d  c20400               ret 4

struct LaserTool {
    void setValue(const unsigned int *value);
};

extern const char message[];
extern void __cdecl report(LaserTool *, double, const char *, unsigned int);

void LaserTool::setValue(const unsigned int *value)
{
    unsigned int n = *value;
    report(this, (double)n, message, n);
}
