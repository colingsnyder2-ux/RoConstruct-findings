// from server: 100% by king_originala
// roc 2008-06 0048ae50  unit: RBX::Network::P8Player::?$GetSetImpl  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ae50
//
// 0048ae50  83ec10               sub esp, 0x10
// 0048ae53  57                   push edi
// 0048ae54  8bf9                 mov edi, ecx
// 0048ae56  8b4704               mov eax, dword ptr [edi + 4]
// 0048ae59  3b4708               cmp eax, dword ptr [edi + 8]
// 0048ae5c  7d2b                 jge 0x48ae89
// 0048ae5e  c1e004               shl eax, 4
// 0048ae61  0307                 add eax, dword ptr [edi]
// 0048ae63  741a                 je 0x48ae7f
// 0048ae65  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048ae69  d901                 fld dword ptr [ecx]
// 0048ae6b  d918                 fstp dword ptr [eax]
// 0048ae6d  d94104               fld dword ptr [ecx + 4]
// 0048ae70  d95804               fstp dword ptr [eax + 4]
// 0048ae73  d94108               fld dword ptr [ecx + 8]
// 0048ae76  d95808               fstp dword ptr [eax + 8]
// 0048ae79  d9410c               fld dword ptr [ecx + 0xc]
// 0048ae7c  d9580c               fstp dword ptr [eax + 0xc]
// 0048ae7f  ff4704               inc dword ptr [edi + 4]
// 0048ae82  5f                   pop edi
// 0048ae83  83c410               add esp, 0x10
// 0048ae86  c20400               ret 4
// 0048ae89  8b0f                 mov ecx, dword ptr [edi]
// 0048ae8b  56                   push esi
// 0048ae8c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0048ae90  3bf1                 cmp esi, ecx
// 0048ae92  723a                 jb 0x48aece
// 0048ae94  8bd0                 mov edx, eax
// 0048ae96  c1e204               shl edx, 4
// 0048ae99  03d1                 add edx, ecx
// 0048ae9b  3bf2                 cmp esi, edx
// 0048ae9d  732f                 jae 0x48aece
// 0048ae9f  d906                 fld dword ptr [esi]
// 0048aea1  8d442408             lea eax, [esp + 8]
// 0048aea5  d95c2408             fstp dword ptr [esp + 8]
// 0048aea9  50                   push eax
// 0048aeaa  d94604               fld dword ptr [esi + 4]
// 0048aead  8bcf                 mov ecx, edi
// 0048aeaf  d95c2410             fstp dword ptr [esp + 0x10]
// 0048aeb3  d94608               fld dword ptr [esi + 8]
// 0048aeb6  d95c2414             fstp dword ptr [esp + 0x14]
// 0048aeba  d9460c               fld dword ptr [esi + 0xc]
// 0048aebd  d95c2418             fstp dword ptr [esp + 0x18]
// 0048aec1  e88affffff           call 0x48ae50
// 0048aec6  5e                   pop esi
// 0048aec7  5f                   pop edi
// 0048aec8  83c410               add esp, 0x10
// 0048aecb  c20400               ret 4
// 0048aece  6a00                 push 0
// 0048aed0  40                   inc eax
// 0048aed1  50                   push eax
// 0048aed2  8bcf                 mov ecx, edi
// 0048aed4  e8e7f8ffff           call 0x48a7c0
// 0048aed9  d906                 fld dword ptr [esi]
// 0048aedb  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048aede  8b17                 mov edx, dword ptr [edi]
// 0048aee0  c1e104               shl ecx, 4
// 0048aee3  d95c11f0             fstp dword ptr [ecx + edx - 0x10]
// 0048aee7  8d4411f0             lea eax, [ecx + edx - 0x10]
// 0048aeeb  d94604               fld dword ptr [esi + 4]
// 0048aeee  d95804               fstp dword ptr [eax + 4]
// 0048aef1  d94608               fld dword ptr [esi + 8]
// 0048aef4  d95808               fstp dword ptr [eax + 8]
// 0048aef7  d9460c               fld dword ptr [esi + 0xc]
// 0048aefa  5e                   pop esi
// 0048aefb  d9580c               fstp dword ptr [eax + 0xc]
// 0048aefe  5f                   pop edi
// 0048aeff  83c410               add esp, 0x10
// 0048af02  c20400               ret 4

inline void* operator new(unsigned int, void* p)
{
    return p;
}

struct Value
{
    float x, y, z, w;

    Value(const Value&);
    Value& operator=(const Value&);
};

inline Value::Value(const Value& other)
{
    x = other.x;
    y = other.y;
    z = other.z;
    w = other.w;
}

inline Value& Value::operator=(const Value& other)
{
    x = other.x;
    y = other.y;
    z = other.z;
    w = other.w;
    return *this;
}

struct S
{
    Value* data;
    int size;
    int capacity;

    void resize(int, bool);
    void func_0048ae50(const Value&);
};

void S::func_0048ae50(const Value& value)
{
    if (size < capacity)
    {
        new (data + size) Value(value);
        ++size;
    }
    else if (&value >= data && &value < data + size)
    {
        Value copy(value);
        func_0048ae50(copy);
    }
    else
    {
        resize(size + 1, false);
        data[size - 1] = value;
    }
}
