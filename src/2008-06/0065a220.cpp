// from server: 33% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct ContactNode {
    int key;
    int pad0;
    int next;
    int pad1;
    int a;
    int b;
    int c;
    int pad2;
    unsigned short flags;
    unsigned short pad3;
    unsigned short slots[16];
};

struct Contact {
    char pad0[0x18];
    ContactNode** nodesBegin;
    ContactNode** nodesEnd;
    char pad1[0x64 - 0x20];
    ContactNode* head;
    char pad2[0x78 - 0x68];
    int counter;
    int maxCounter;

    int addContact(int a, int b, int c);
};

extern int g_hashSize;

ContactNode* __cdecl allocateNode(int key);
int __cdecl findConnection(ContactNode* a, ContactNode* b);
void __cdecl removeConnection(Contact* c, int a, int b);
ContactNode* __cdecl findNode(Contact* c, int key, int* out);
void __cdecl insertNode(Contact* c, int key, int* out);
void __cdecl processNode(Contact* c, int key);

int Contact::addContact(int a, int b, int c)
{
    int key = (a * 0x127409f) ^ (b * 0x4f9ffb7) ^ (c * 0x466f45d);
    int mask = 0xffff >> (a & 0x1f);
    key &= mask;

    this->counter++;

    ContactNode* node = allocateNode(key);
    node->key = a;
    node->a = a;
    node->b = b;
    node->c = c;
    node->next = key;

    ContactNode* oldHead = this->head;
    this->head = node;
    node->pad0 = (int)oldHead;
    node->pad1 = 0;
    if (oldHead) {
        oldHead->pad1 = (int)node;
    }

    int idx = a * 3;
    ContactNode** begin = *(ContactNode***)((char*)this + 0x18 + idx * 8);
    ContactNode** end = *(ContactNode***)((char*)this + 0x1c + idx * 8);
    int count = (int)(end - begin);
    if (key >= count) {
        _invalid_parameter_noinfo();
    }
    ContactNode* existing = begin[key];
    node->pad0 = (int)existing;

    count = (int)(end - begin);
    if (key >= count) {
        _invalid_parameter_noinfo();
    }
    begin[key] = node;

    int prevKey = -1;
    int curKey = a;
    int flag = 1;
    int result = 0;

    if (curKey < g_hashSize) {
        while (curKey < g_hashSize) {
            if (curKey > a) {
                int ka = b >> 1;
                int kb = c >> 1;
                int kc = a >> 1;
                int k2 = (ka * 0x4f9ffb7) ^ (kb * 0x466f45d) ^ (kc * 0x127409f);
                int m2 = 0xffff >> (curKey & 0x1f);
                k2 &= m2;
                int cnt = (int)(end - begin);
                if (k2 >= cnt) {
                    _invalid_parameter_noinfo();
                }
                result = (int)begin[k2];
            } else {
                result = 0;
            }

            if (result) {
                ContactNode* n = (ContactNode*)result;
                while (n) {
                    int nk = n->key;
                    if (nk != a && n->a == b && n->b == c && n->c == prevKey) {
                        if (findConnection(n, (ContactNode*)a) == 0) {
                            removeConnection(this, a, nk);
                        }
                    }
                    n = (ContactNode*)n->pad0;
                }
            }

            if (curKey > a && flag) {
                int* out = &result;
                if (findNode(this, curKey, out) == 0) {
                    insertNode(this, curKey, out);
                }
                int shift = (a - curKey) & 0x1f;
                int bit0 = (b >> shift) & 1;
                int bit1 = (c >> shift) & 1;
                int bit2 = (a >> shift) & 1;
                int bitIdx = bit2 + (bit1 + bit0 * 2) * 2;
                unsigned char bit = (unsigned char)(1 << bitIdx);
                ContactNode* rn = (ContactNode*)result;
                if (rn->flags & bit) {
                    flag = 0;
                } else {
                    rn->flags |= bit;
                    rn->slots[bitIdx] = (unsigned short)prevKey;
                }
            }

            prevKey = key;
            curKey++;
        }
    }

    ContactNode* head = this->head;
    if (head->flags > 0) {
        processNode(this, a);
    }

    if (this->maxCounter < this->counter) {
        this->maxCounter = this->counter;
    }

    return this->counter;
}
