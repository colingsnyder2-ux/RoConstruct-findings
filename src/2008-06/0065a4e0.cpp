// from server: 82% by Espeon
// from server: 78% by king_originala
// roc 2008-06 0065a4e0  unit: RBX::BallBallContact  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065a4e0
//
// 0065a4e0  83ec2c               sub esp, 0x2c
// 0065a4e3  53                   push ebx
// 0065a4e4  33c0                 xor eax, eax
// 0065a4e6  55                   push ebp
// 0065a4e7  56                   push esi
// 0065a4e8  57                   push edi
// 0065a4e9  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0065a4ed  89442418             mov dword ptr [esp + 0x18], eax
// 0065a4f1  8944241c             mov dword ptr [esp + 0x1c], eax
// 0065a4f5  89442420             mov dword ptr [esp + 0x20], eax
// 0065a4f9  89442424             mov dword ptr [esp + 0x24], eax
// 0065a4fd  89442428             mov dword ptr [esp + 0x28], eax
// 0065a501  8944242c             mov dword ptr [esp + 0x2c], eax
// 0065a505  8be9                 mov ebp, ecx
// 0065a507  8d442424             lea eax, [esp + 0x24]
// 0065a50b  50                   push eax
// 0065a50c  8d4c241c             lea ecx, [esp + 0x1c]
// 0065a510  51                   push ecx
// 0065a511  8bcf                 mov ecx, edi
// 0065a513  e838d5f8ff           call 0x5e7a50
// 0065a518  50                   push eax
// 0065a519  8d542420             lea edx, [esp + 0x20]
// 0065a51d  57                   push edi
// 0065a51e  52                   push edx
// 0065a51f  e83cf6ffff           call 0x659b60
// 0065a524  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065a528  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065a52c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0065a530  8b742434             mov esi, dword ptr [esp + 0x34]
// 0065a534  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0065a538  894768               mov dword ptr [edi + 0x68], eax
// 0065a53b  894f6c               mov dword ptr [edi + 0x6c], ecx
// 0065a53e  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0065a542  894f74               mov dword ptr [edi + 0x74], ecx
// 0065a545  83c414               add esp, 0x14
// 0065a548  3bc1                 cmp eax, ecx
// 0065a54a  895778               mov dword ptr [edi + 0x78], edx
// 0065a54d  897770               mov dword ptr [edi + 0x70], esi
// 0065a550  895f7c               mov dword ptr [edi + 0x7c], ebx
// 0065a553  8bd0                 mov edx, eax
// 0065a555  89442410             mov dword ptr [esp + 0x10], eax
// 0065a559  7f64                 jg 0x65a5bf
// 0065a55b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0065a55f  90                   nop 
// 0065a560  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0065a564  3bc1                 cmp eax, ecx
// 0065a566  89442440             mov dword ptr [esp + 0x40], eax
// 0065a56a  7f48                 jg 0x65a5b4
// 0065a56c  8d642400             lea esp, [esp]
// 0065a570  3bf3                 cmp esi, ebx
// 0065a572  7f37                 jg 0x65a5ab
// 0065a574  89542430             mov dword ptr [esp + 0x30], edx
// 0065a578  89442434             mov dword ptr [esp + 0x34], eax
// 0065a57c  8d642400             lea esp, [esp]
// 0065a580  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065a584  8d442430             lea eax, [esp + 0x30]
// 0065a588  50                   push eax
// 0065a589  57                   push edi
// 0065a58a  51                   push ecx
// 0065a58b  8bcd                 mov ecx, ebp
// 0065a58d  89742444             mov dword ptr [esp + 0x44], esi
// 0065a591  e88afcffff           call 0x65a220
// 0065a596  46                   inc esi
// 0065a597  3bf3                 cmp esi, ebx
// 0065a599  7ee5                 jle 0x65a580
// 0065a59b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065a59f  8b442440             mov eax, dword ptr [esp + 0x40]
// 0065a5a3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0065a5a7  8b742420             mov esi, dword ptr [esp + 0x20]
// 0065a5ab  40                   inc eax
// 0065a5ac  3bc1                 cmp eax, ecx
// 0065a5ae  89442440             mov dword ptr [esp + 0x40], eax
// 0065a5b2  7ebc                 jle 0x65a570
// 0065a5b4  42                   inc edx
// 0065a5b5  3b542424             cmp edx, dword ptr [esp + 0x24]
// 0065a5b9  89542410             mov dword ptr [esp + 0x10], edx
// 0065a5bd  7ea1                 jle 0x65a560
// 0065a5bf  5f                   pop edi
// 0065a5c0  5e                   pop esi
// 0065a5c1  5d                   pop ebp
// 0065a5c2  5b                   pop ebx
// 0065a5c3  83c42c               add esp, 0x2c
// 0065a5c6  c20400               ret 4

struct Int3 {
    int x, y, z;
};

struct Source {
    char reserved0[0x68];
    Int3 lower;
    Int3 upper;
    char reserved1[0x10];
    unsigned int version;
    const void* get();
};

extern void __cdecl query(int*, Source*, const void*, Int3*, Int3*);

struct Contact {
    void visit(int, Source*, const Int3*);
    void update(Source*);
};

void Contact::update(Source* source)
{
    Int3 lower = { 0, 0, 0 };
    Int3 upper = { 0, 0, 0 };
    int handle;

    query(&handle, source, source->get(), &lower, &upper);

    source->lower=lower;
    source->upper=upper;

    const int zmax = upper.z;
    for (int x = lower.x; x <= upper.x; ++x) {
        for (int y = lower.y; y <= upper.y; ++y) {
            int z = lower.z;
            if (z <= zmax) {
                Int3 cell;
                cell.x = x;
                cell.y = y;
                do {
                    cell.z = z;
                    visit(handle, source, &cell);
                    ++z;
                } while (z <= zmax);
            }
        }
    }
}
