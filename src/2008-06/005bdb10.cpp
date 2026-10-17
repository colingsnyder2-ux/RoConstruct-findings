// from server: 48% by colin
extern "C" void* __stdcall sub_802458();

struct String {
    char storage[28];
    String(const char*);
};

struct Inner {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
};

struct Obj {
    char pad[0x13c];
    Inner inner;
    void* field154;

    void method_4b0d80(void*);
    void method_55afd0();
    void method_5bd6d0(int, String*);
    void target();
};

void Obj::target()
{
    void* p = this->field154;
    void* q = *(void**)((char*)p + 4);
    this->method_4b0d80(q);

    Inner* in = &this->inner;
    void* a = in->field18;
    *(void**)((char*)a + 4) = a;
    void* b = in->field18;
    in->field1C = 0;
    *(void**)b = b;
    void* c = in->field18;
    *(void**)((char*)c + 8) = c;

    this->method_55afd0();

    {
        String s("Sounds\\bass.wav");
        this->method_5bd6d0(1, &s);
    }
    {
        String s("Sounds\\collide.wav");
        this->method_5bd6d0(2, &s);
    }
    {
        String s("Sounds\\glassbreak.wav");
        this->method_5bd6d0(3, &s);
    }
    {
        String s("Sounds\\switch.wav");
        this->method_5bd6d0(4, &s);
    }
    {
        String s("Sounds\\clickfast.wav");
        this->method_5bd6d0(5, &s);
    }
    {
        String s("Sounds\\Rubber band sling shot.wav");
        this->method_5bd6d0(6, &s);
    }
    {
        String s("Sounds\\pageturn.wav");
        this->method_5bd6d0(7, &s);
    }
    {
        String s("Sounds\\electronicpingshort.wav");
        this->method_5bd6d0(8, &s);
    }
    {
        String s("Sounds\\snap.wav");
        this->method_5bd6d0(9, &s);
    }
    {
        String s("Sounds\\splat.wav");
        this->method_5bd6d0(10, &s);
    }
    {
        String s("Sounds\\SWITCH3.wav");
        this->method_5bd6d0(11, &s);
    }
    {
        String s("Sounds\\flashbulb.wav");
        this->method_5bd6d0(12, &s);
    }
    {
        String s("Sounds\\bass.wav");
        this->method_5bd6d0(13, &s);
    }
    {
        String s("Sounds\\collide.wav");
        this->method_5bd6d0(14, &s);
    }
}
