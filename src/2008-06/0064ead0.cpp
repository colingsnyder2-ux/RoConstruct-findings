// from server: 80% by EspClaude
// from server: 75% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espclaude_f5773df1ed38c4af.cpp

// Candidate translation unit (score above; library headers required).
#include <string>
typedef std::string String;
struct Hit {
    float data[4];
    bool contains();
};

namespace RBX {
    class Instance {
    public:
        virtual ~Instance();
        virtual void v01();
        virtual void v02();
        virtual void v03();
        virtual void v04();
        virtual void v05();
        virtual void v06();
        virtual void v07();
        virtual void v08();
        virtual void v09();
        virtual void v10();
        virtual void v11();
        virtual void v12();
        virtual void v13();
        virtual void v14();
        virtual void v15();
        virtual void v16();
        virtual void v17();
        virtual void v18();
        virtual void v19();
        virtual void v20();
        virtual bool enabled();

        Hit hit(int);
    };

    class ServiceProvider : public Instance {
    public:
        void send(String);
        void select(int);
    };
}

RBX::ServiceProvider* func_00491d50(RBX::Instance*);
RBX::ServiceProvider* func_005807b0(RBX::Instance*);

struct Event {
    int type;
    int unused;
    int position;
};

struct Result {
    int state;
    int value;
};

struct ChatWidget {
    char padding[0x18];
    String text;

    Result* fallback(Result*, Event*);
    Result* f(Result*, Event*);
};

Result* ChatWidget::f(Result* result, Event* event) {
    RBX::Instance* owner =
        reinterpret_cast<RBX::Instance*>(
            reinterpret_cast<char*>(this) - 0x130);

    if (owner->enabled()) {
        int type = event->type;
        switch (type) {
        case 1: case 2: case 3: case 5: case 6: case 7:
            break;
        case 4:
            if (owner->hit(event->position).contains()) {
                RBX::ServiceProvider* service = func_00491d50(owner);
                if (service) {
                    func_005807b0(owner)->select(4);
                    String message = "/sc " + text;
                    service->send(message);
                    result->state = 2;
                    result->value = 0;
                    return result;
                }
            }
            break;
        }
    }

    fallback(result, event);
    return result;
}

