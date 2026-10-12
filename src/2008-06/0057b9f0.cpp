// from server: 99% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S;

struct Base {
    char data[0x1c8];
    Base();
    ~Base();
};

struct Part {
    char data[0x28];
    Part(int);
    ~Part();
};

struct Signal {
    char data[8];
    Signal(S*);
    ~Signal();
};

extern void __cdecl constructSignal(Signal*, S*);

inline Signal::Signal(S* owner)
{
    constructSignal(this, owner);
}

struct Pair {
    char data[8];
    Pair();
    ~Pair();
};

extern void __cdecl constructPair(Pair*);

inline Pair::Pair()
{
    constructPair(this);
}

struct NullPair {
    void* first;
    void* second;
    NullPair();
    ~NullPair();
};

inline NullPair::NullPair() : first(0), second(0) {}

struct String {
    char data[28];
    String();
    String(const char*);
    ~String();
};

extern String* (__thiscall *stringDefault)(String*);
extern String* (__thiscall *stringFromText)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

inline String::String()
{
    stringDefault(this);
}

inline String::String(const char* text)
{
    stringFromText(this, text);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Node {
    char data[12];
    Node();
};

struct Count {
    void* data;
    Count(Node*);
    ~Count();
    void initialize(Node*);
};

extern void __cdecl connectOwner(Count*, Node*, Node*);

inline Count::Count(Node* p)
{
    initialize(p);
    connectOwner(this, p, p);
}

extern unsigned table0[], table10[], table14[], table20[], table24[];
extern unsigned table44[], table64[], table84[], tablea4[], tablec4[];
extern unsigned table130[], table150[], table170[], table1c8[];
extern unsigned table1f0[], table1f4[], table1f8[];

struct S : Base, Part {
    unsigned* table1;
    unsigned* table2;
    unsigned* table3;
    NullPair pair1fc;
    Signal signal;
    NullPair pair20c;
    NullPair pair214;
    Pair pair21c;
    Pair pair224;
    unsigned field22c;
    bool field230;
    char padding231[3];
    String text;
    unsigned field250;
    unsigned field254;
    bool field258;
    bool field259;
    Node* node;
    Count count;

    S();
    void setValue(const String&);
};

S::S()
    : Base(),
      Part(0),
      table1((
          ((unsigned**)this)[0] = table0,
          ((unsigned**)this)[4] = table10,
          ((unsigned**)this)[5] = table14,
          ((unsigned**)this)[8] = table20,
          ((unsigned**)this)[9] = table24,
          ((unsigned**)this)[17] = table44,
          ((unsigned**)this)[25] = table64,
          ((unsigned**)this)[33] = table84,
          ((unsigned**)this)[41] = tablea4,
          ((unsigned**)this)[49] = tablec4,
          ((unsigned**)this)[76] = table130,
          ((unsigned**)this)[84] = table150,
          ((unsigned**)this)[92] = table170,
          ((unsigned**)this)[114] = table1c8,
          table1f0)),
      table2(table1f4),
      table3(table1f8),
      pair1fc(),
      signal(this),
      pair20c(),
      pair214(),
      pair21c(),
      pair224(),
      field22c(0),
      field230(true),
      text(),
      field250(0),
      field258(false),
      field259(false),
      node(new Node),
      count(node)
{
    String name("Level");
    setValue(name);
}
