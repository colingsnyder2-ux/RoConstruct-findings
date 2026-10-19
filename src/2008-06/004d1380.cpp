// from server: 94% by colin
// from server: 93% by king_originala
// roc 2008-06 004d1380  unit: RBX::Network::PhysicsSender  size: 424 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d1380
//
// 004d1380  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 004d1383  83ec08               sub esp, 8
// 004d1386  56                   push esi
// 004d1387  8b7168               mov esi, dword ptr [ecx + 0x68]
// 004d138a  3bf0                 cmp esi, eax
// 004d138c  7706                 ja 0x4d1394
// 004d138e  2bc6                 sub eax, esi
// 004d1390  8bd0                 mov edx, eax
// 004d1392  eb07                 jmp 0x4d139b
// 004d1394  8b5170               mov edx, dword ptr [ecx + 0x70]
// 004d1397  2bd6                 sub edx, esi
// 004d1399  03d0                 add edx, eax
// 004d139b  53                   push ebx
// 004d139c  55                   push ebp
// 004d139d  8d81e0030000         lea eax, [ecx + 0x3e0]
// 004d13a3  8910                 mov dword ptr [eax], edx
// 004d13a5  8b717c               mov esi, dword ptr [ecx + 0x7c]
// 004d13a8  57                   push edi
// 004d13a9  8b7978               mov edi, dword ptr [ecx + 0x78]
// 004d13ac  3bfe                 cmp edi, esi
// 004d13ae  7706                 ja 0x4d13b6
// 004d13b0  2bf7                 sub esi, edi
// 004d13b2  8bd6                 mov edx, esi
// 004d13b4  eb0a                 jmp 0x4d13c0
// 004d13b6  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 004d13bc  2bd7                 sub edx, edi
// 004d13be  03d6                 add edx, esi
// 004d13c0  8991e4030000         mov dword ptr [ecx + 0x3e4], edx
// 004d13c6  8bb18c000000         mov esi, dword ptr [ecx + 0x8c]
// 004d13cc  8bb988000000         mov edi, dword ptr [ecx + 0x88]
// 004d13d2  3bfe                 cmp edi, esi
// 004d13d4  7706                 ja 0x4d13dc
// 004d13d6  2bf7                 sub esi, edi
// 004d13d8  8bd6                 mov edx, esi
// 004d13da  eb0a                 jmp 0x4d13e6
// 004d13dc  8b9190000000         mov edx, dword ptr [ecx + 0x90]
// 004d13e2  2bd7                 sub edx, edi
// 004d13e4  03d6                 add edx, esi
// 004d13e6  8991e8030000         mov dword ptr [ecx + 0x3e8], edx
// 004d13ec  8bb19c000000         mov esi, dword ptr [ecx + 0x9c]
// 004d13f2  8bb998000000         mov edi, dword ptr [ecx + 0x98]
// 004d13f8  3bfe                 cmp edi, esi
// 004d13fa  7706                 ja 0x4d1402
// 004d13fc  2bf7                 sub esi, edi
// 004d13fe  8bd6                 mov edx, esi
// 004d1400  eb0a                 jmp 0x4d140c
// 004d1402  8b91a0000000         mov edx, dword ptr [ecx + 0xa0]
// 004d1408  2bd7                 sub edx, edi
// 004d140a  03d6                 add edx, esi
// 004d140c  8991ec030000         mov dword ptr [ecx + 0x3ec], edx
// 004d1412  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004d1415  8bb9d4040000         mov edi, dword ptr [ecx + 0x4d4]
// 004d141b  8ba9d0040000         mov ebp, dword ptr [ecx + 0x4d0]
// 004d1421  8bb1a8040000         mov esi, dword ptr [ecx + 0x4a8]
// 004d1427  899128040000         mov dword ptr [ecx + 0x428], edx
// 004d142d  8b91ac040000         mov edx, dword ptr [ecx + 0x4ac]
// 004d1433  3bfa                 cmp edi, edx
// 004d1435  7c3e                 jl 0x4d1475
// 004d1437  7f04                 jg 0x4d143d
// 004d1439  3bee                 cmp ebp, esi
// 004d143b  7638                 jbe 0x4d1475
// 004d143d  8b99b0040000         mov ebx, dword ptr [ecx + 0x4b0]
// 004d1443  85db                 test ebx, ebx
// 004d1445  762e                 jbe 0x4d1475
// 004d1447  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d144b  db442410             fild dword ptr [esp + 0x10]
// 004d144f  7d06                 jge 0x4d1457
// 004d1451  dc0540128100         fadd qword ptr [0x811240]
// 004d1457  8bdd                 mov ebx, ebp
// 004d1459  2bde                 sub ebx, esi
// 004d145b  8bf7                 mov esi, edi
// 004d145d  1bf2                 sbb esi, edx
// 004d145f  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d1463  89742414             mov dword ptr [esp + 0x14], esi
// 004d1467  df6c2410             fild qword ptr [esp + 0x10]
// 004d146b  dc0df06a8200         fmul qword ptr [0x826af0]
// 004d1471  def9                 fdivp st(1)
// 004d1473  eb02                 jmp 0x4d1477
// 004d1475  d9ee                 fldz 
// 004d1477  33d2                 xor edx, edx
// 004d1479  dd9998040000         fstp qword ptr [ecx + 0x498]
// 004d147f  899190040000         mov dword ptr [ecx + 0x490], edx
// 004d1485  3991a8000000         cmp dword ptr [ecx + 0xa8], edx
// 004d148b  761d                 jbe 0x4d14aa
// 004d148d  8bb1a4000000         mov esi, dword ptr [ecx + 0xa4]
// 004d1493  8b1e                 mov ebx, dword ptr [esi]
// 004d1495  8b5b0c               mov ebx, dword ptr [ebx + 0xc]
// 004d1498  019990040000         add dword ptr [ecx + 0x490], ebx
// 004d149e  42                   inc edx
// 004d149f  83c604               add esi, 4
// 004d14a2  3b91a8000000         cmp edx, dword ptr [ecx + 0xa8]
// 004d14a8  72e9                 jb 0x4d1493
// 004d14aa  8b7114               mov esi, dword ptr [ecx + 0x14]
// 004d14ad  8b5910               mov ebx, dword ptr [ecx + 0x10]
// 004d14b0  3bde                 cmp ebx, esi
// 004d14b2  7706                 ja 0x4d14ba
// 004d14b4  2bf3                 sub esi, ebx
// 004d14b6  8bd6                 mov edx, esi
// 004d14b8  eb07                 jmp 0x4d14c1
// 004d14ba  8b5118               mov edx, dword ptr [ecx + 0x18]
// 004d14bd  2bd3                 sub edx, ebx
// 004d14bf  03d6                 add edx, esi
// 004d14c1  80b90405000000       cmp byte ptr [ecx + 0x504], 0
// 004d14c8  899194040000         mov dword ptr [ecx + 0x494], edx
// 004d14ce  7423                 je 0x4d14f3
// 004d14d0  2ba908050000         sub ebp, dword ptr [ecx + 0x508]
// 004d14d6  1bb90c050000         sbb edi, dword ptr [ecx + 0x50c]
// 004d14dc  897c2414             mov dword ptr [esp + 0x14], edi
// 004d14e0  7811                 js 0x4d14f3
// 004d14e2  7f08                 jg 0x4d14ec
// 004d14e4  81fd40420f00         cmp ebp, 0xf4240
// 004d14ea  7607                 jbe 0x4d14f3
// 004d14ec  ba01000000           mov edx, 1
// 004d14f1  eb02                 jmp 0x4d14f5
// 004d14f3  33d2                 xor edx, edx
// 004d14f5  5f                   pop edi
// 004d14f6  8891a4040000         mov byte ptr [ecx + 0x4a4], dl
// 004d14fc  8b5150               mov edx, dword ptr [ecx + 0x50]
// 004d14ff  33f6                 xor esi, esi
// 004d1501  5d                   pop ebp
// 004d1502  5b                   pop ebx
// 004d1503  85d2                 test edx, edx
// 004d1505  7416                 je 0x4d151d
// 004d1507  eb07                 jmp 0x4d1510
// 004d1509  8da42400000000       lea esp, [esp]
// 004d1510  037204               add esi, dword ptr [edx + 4]
// 004d1513  8b9208010000         mov edx, dword ptr [edx + 0x108]
// 004d1519  85d2                 test edx, edx
// 004d151b  75f3                 jne 0x4d1510
// 004d151d  89b140040000         mov dword ptr [ecx + 0x440], esi
// 004d1523  5e                   pop esi
// 004d1524  83c408               add esp, 8
// 004d1527  c3                   ret 
#include <intrin.h>

extern const double timeScale;

struct Item
{
    char padding[12];
    unsigned count;
};

struct Node
{
    unsigned unused;
    unsigned count;
    char padding[256];
    Node* next;
};

struct S
{
    char p000[16];
    unsigned begin0, end0, capacity0;
    char p01c[4];
    unsigned count20;
    char p024[44];
    Node* head;
    char p054[20];
    unsigned begin1, end1, capacity1;
    char p074[4];
    unsigned begin2, end2, capacity2;
    char p084[4];
    unsigned begin3, end3, capacity3;
    char p094[4];
    unsigned begin4, end4, capacity4;
    Item** items;
    unsigned itemCount;
    char p0ac[820];
    volatile unsigned result1, result2, result3, result4;
    char p3f0[56];
    unsigned result20;
    char p42c[20];
    unsigned nodeCount;
    char p444[76];
    unsigned totalCount;
    unsigned result0;
    double rate;
    char p4a0[4];
    bool expired;
    char p4a5[3];
    __int64 previous;
    unsigned samples;
    char p4b4[28];
    __int64 current;
    char p4d8[44];
    bool enabled;
    char p505[3];
    __int64 started;

    unsigned* f();
};

unsigned* S::f()
{
    unsigned end = end1;
    unsigned begin = begin1;
    result1 = begin <= end
        ? end - begin : capacity1 - begin + end;
        _ReadWriteBarrier();

    end = end2;
    begin = begin2;
    result2 = begin <= end
        ? end - begin : capacity2 - begin + end;

    end = end3;
    begin = begin3;
    result3 = begin <= end
        ? end - begin : capacity3 - begin + end;

    end = end4;
    begin = begin4;
    result4 = begin <= end
        ? end - begin : capacity4 - begin + end;

    result20 = count20;

    __int64 now = current;
    __int64 before = previous;
    if (now > before && samples > 0)
        rate = double(samples) / (double(now - before) * timeScale);
    else
        rate = 0.0;

    totalCount = 0;
    for (unsigned i = 0; i < itemCount; ++i)
        totalCount += items[i]->count;

    end = end0;
    begin = begin0;
    result0 = begin <= end
        ? end - begin : capacity0 - begin + end;

    expired = enabled && now - started > 1000000;

    unsigned sum = 0;
    for (Node* n = head; n; n = n->next)
        sum += n->count;
    nodeCount = sum;

    return const_cast<unsigned*>(&result1);
}
