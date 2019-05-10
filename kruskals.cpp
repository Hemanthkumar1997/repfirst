int V=100;
int parent[V]; 

int find(int i) 
{ 
    while (parent[i] != i) 
        i = parent[i]; 
    return i; 
} 

void union1(int i, int j) 
{ 
    int a = find(i); 
    int b = find(j); 
    parent[a] = b; 
}

void find_spanning_tree(){
 int mincost = 0; 
    for (int i = 0; i < pointer; i++) 
        parent[i] = i; 

    int edge_count = 0; 
    while (edge_count < pointer - 1) { 
        int min = 999, a = -1, b = -1; 
        for (int i = 0; i < pointer; i++) { 
            for (int j = 0; j < pointer; j++) { 
                if (find(i) != find(j) && costmatrix[i][j] < min) { 
                    min = cost[i][j]; 
                    a = i; 
                    b = j; 
                } 
            } 
        } 
  
        union1(a, b); 
	t[k][0]=a;
	t[k++][1]=b
        mincost += min; 
    } 
    totalcost= mincost;
    found=1; 
}
