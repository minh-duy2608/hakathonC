#include<stdio.h>
int main(){
	int a,b,c,n,s,chose,temp;
	int count;
	int arr[n];
	int min;
	int max;
	min=arr[n];
	max=arr[n];
	int addIndex;
	int index;
	
	do{
		printf("MENU \n");
		printf("1.Nhap so phan tu va gia tri cho mang \n");
		printf("2.In ra cac gia tri phan tu trong mang \n");
		printf("3.Tim gia tri nho nhat va lon nhat trong mang \n");
		printf("4.In ra tong cua tat ca cac phan tu \n");
		printf("5.Them mot phan tu vao cuoi mang \n");
		printf("6.Xoa phan tu tai mot vi tri cu the \n");
	    printf("7.Sap xep mang theo thu tu giam dan \n");
	   	printf("8.Tim kiem phan tu co ton tai trong mang khong \n");
		printf("9.In ra toan bo so nguyen to trong mang \n");
	   	printf("10.Sap xep mang theo thu tu tang dan \n");
	    printf("11.Thoat \n");
	    scanf("%d",&chose);
		
		switch(chose){
			case 1:
				printf("nhap so phan tu cho mang:");
				scanf("%d",&n);
				for(int i=0; i<n; i++){
					printf("nhap gia tri cho mang arr[%d]: \n",i);
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				if(n==0){
				printf("Mang chua duoc nhap\n");
			}
				for(int i=0; i<n; i++){
					printf("arr[%d] = %d\t",i,arr[i]);
				}
				printf("\n");
				break;
			case 3:
				if(n==0){
				printf("Mang chua duoc nhap\n");
			}
			for(int i=0;i<n;i++){
				min=arr[0];
				if(arr[i]<min){
					min=arr[i];
				}
			}printf("Gia tri nho nhat la %d\n",min);
			for(int i=0;i<n;i++){
				max=arr[0];
				if(arr[i]>max){
					max=arr[i];
				}
			}printf("Gia tri lon nhat la %d\n",max);
			    break;
			case 4:
				if(n==0){
				printf("Mang chua duoc nhap\n");
			}
			for(int i=0;i<n;i++){
				s+=arr[i];
			}printf("Tong cua cac phan tu trong mang la: %d\n",s);
				break;
			case 5:
			printf("Moi ban nhap phan tu muon them :\n");
			scanf("%d",&addIndex);
			arr[n++]=addIndex;
				break;
			case 6:
			 printf("Moi ban nhap vao vi tri muon xoa:\n");
				scanf("%d",&index);

				for(int c=index; c<n; c++){
				arr[c]=arr[c+1];
				n--;
				count--;
				}
				break;
			case 7:
				if(n==0){
				printf("Mang chua duoc nhap\n");
			}
			for(int i=0;i<n;i++){
				for(int j=0;j<n-i-1;j++){
				if(arr[j]<arr[j+1]){
					int temp;
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
				}
			}printf("Mang sau khi sap xep la:\n");
			for(int i=0;i<n;i++){
				printf("%d\t",arr[i]);
			}printf("\n");
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
			
				break;
			case 11:
				break;
				
		}				
	}while(chose!=11);
	return 0;
}
