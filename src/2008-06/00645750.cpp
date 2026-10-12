// from server: 83% by king_originala
struct Matrix {
    float values[9];
};

struct Frame {
    Matrix rotation;
    float x, y, z;
    bool differs(const Frame& other) const;
};

struct Joint;

struct Manager {
    void remove(Joint* joint);
    void insert(Joint* joint);
};

struct Node {
    virtual void unused();
    virtual int kind();
    Node* child;
    unsigned int reserved;
    Manager* manager;
};

struct Joint {
    unsigned int reserved0;
    Node* node;
    unsigned char reserved1[32];
    Frame first;
    Frame second;

    void setFrame(int index, const Frame& frame);
};

void Joint::setFrame(int index, const Frame& frame)
{
    if (frame.differs(index == 0 ? first : second)) {
        Frame& destination = index == 0 ? first : second;
        destination.rotation = frame.rotation;
        destination.x = frame.x;
        destination.y = frame.y;
        destination.z = frame.z;

        if (node) {
            Node* owner = node->kind() == 7 ? node->child : node;
            Manager* manager = owner->manager;
            if (manager) {
                manager->remove(this);
                manager->insert(this);
            }
        }
    }
}
