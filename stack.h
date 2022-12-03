struct StackNode {
    int key;
    struct StackNode* prev;
};

struct Stack {
    struct StackNode* head;
};

typedef struct StackNode StackNode;
typedef struct Stack Stack;

//�������� �����
Stack* CreateStack(void);

//������ ����� �� �������
unsigned StackIsEmpty(Stack*);

//�������� ������� � ���� �����
void Push(Stack* stack, int key);

//������� ������� � ����� �����
int Pop(Stack* stack);

//������� �������� �����
void PrintStack(Stack* stack);